#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include "dockxml.h"
#include <QStringList>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //开始 车辆管理页面
    on_actionCar_triggered();

    //打开数据库
    connectDB();

    //初始化数据
    initData();

    DockXML::createXML("../demo.xml");  //创建空的xml文件

//    QStringList list;
//    list <<"二汽神龙" << "毕加索" << "39" << "1" << "39";
//    DockXML::appendXML("../demo.xml", list);

//    QStringList fList;
//    QStringList bList;
//    QStringList pList;
//    QStringList nList;
//    QStringList tList;
//    DockXML::readXML("../demo.xml", fList, bList, pList, nList, tList);
//    for(int i = 0; i < fList.size(); i++)
//    {
//        QString str = QString("%1:%2:卖出了%3,单价：%4,总价：%5")
//                .arg(fList.at(i))
//                .arg(bList.at(i))
//                .arg(nList.at(i))
//                .arg(pList.at(i))
//                .arg(tList.at(i));

//        qDebug() << str.toUtf8().data();
//    }



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionCar_triggered()
{
    //车辆管理菜单
    ui->stackedWidget->setCurrentWidget(ui->car);
    ui->label->setText("车辆管理");
}

void MainWindow::on_actionCalc_triggered()
{
    //销售统计菜单
    ui->stackedWidget->setCurrentWidget(ui->calc);
    ui->label->setText("销售统计");
}

void MainWindow::connectDB()
{
    //添加数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("123456");
    db.setDatabaseName("car");

    //打开数据库
    if(!db.open())
    {
        QMessageBox::warning(this, "数据库打开失败！", db.lastError().text());
        return;
    }

}

void MainWindow::initData()
{
    //初始化数据
    QSqlQueryModel *queryModel = new QSqlQueryModel(this);  //新建模型
    queryModel->setQuery("select name from factory;"); //sql语句

    ui->comboBoxFactory->setModel(queryModel);

    ui->last->setText("0"); //剩余数量
    ui->lineEditTotal->setEnabled(false);   //金额

}

void MainWindow::on_comboBoxFactory_currentIndexChanged(const QString &arg1)
{
    //厂家下拉框槽函数
    if(arg1 == "请选择厂家")
    {
        //内容情况
        ui->comboBoxBrand->clear(); //品牌下拉框清空
        ui->lineEditPrice->clear(); //报价清空
        ui->last->setText("0"); //剩余数量
        ui->lineEditTotal->clear(); //金额清空
        ui->spinBox->setValue(0);   //数量选择框
        ui->spinBox->setEnabled(false); //不让选择
        ui->buttonSure->setEnabled(false);
    }
    else
    {
        ui->comboBoxBrand->clear();
        QSqlQuery query;
        QString sql = QString("select name from brand where factory = '%1'").arg(arg1);
        //select name from brand where factory = '一汽大众'
        //执行sql语句
        query.exec(sql);

        //获取内容
        while(query.next())
        {
            QString name = query.value(0).toString();
            ui->comboBoxBrand->addItem(name);
        }
        ui->spinBox->setEnabled(true);
    }
}

void MainWindow::on_comboBoxBrand_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;
    QString sql = QString("select price, last from brand where factory = '%1' and name = '%2'")
            .arg(ui->comboBoxFactory->currentText())
            .arg(arg1);
    //select name from brand where factory = '一汽大众' and name = '奥迪A6'
    //执行sql语句
    query.exec(sql);

    //获取内容
    while(query.next())
    {
        //报价
        int price = query.value("price").toInt();
        //剩余数量
        int last = query.value("last").toInt();

        //更新到对应的控件
        ui->lineEditPrice->setText(QString::number(price)); //把int转换为QString
        ui->last->setText(QString::number(last));
    }
}
//数量选择框槽函数
void MainWindow::on_spinBox_valueChanged(int arg1)
{
    //更新剩余数量
    //原来的-选择的
    //1)厂家
    QString factoryStr = ui->comboBoxFactory->currentText();
    //2)品牌
    QString brandStr = ui->comboBoxBrand->currentText();

    if(0 == arg1)
    {
        ui->buttonSure->setEnabled(false);
    }
    else
    {
        ui->buttonSure->setEnabled(true);
    }

    //获取数据库剩余数量
    QSqlQuery query;
    QString sql = QString("select last from brand where factory = '%1' and name = '%2'")
            .arg(factoryStr)
            .arg(brandStr);
    //执行数据库
    query.exec(sql);

    int last;
    while(query.next())
    {
        last = query.value("last").toInt(); //剩余
    }

    if(arg1 > last) //如果选择的数目大于剩余数目，中断程序。
    {
        ui->spinBox->setValue(last);
        return ;
    }

    int tempNmu = last - arg1;
    ui->last->setText(QString::number(tempNmu));    //剩余数量

    //金额
    int price = ui->lineEditPrice->text().toInt();   //报价
    int sum = price * arg1;
    ui->lineEditTotal->setText(QString::number(sum));
}

void MainWindow::on_buttonCancel_clicked()
{
    //取消按钮
    on_comboBoxFactory_currentIndexChanged("请选择厂家");
    ui->comboBoxFactory->setCurrentIndex(0);
    ui->last->setText("0");
}

void MainWindow::on_buttonSure_clicked()
{
    //获取信息
    //1）销售数据
    int num = ui->spinBox->value();
    //2)剩余
    int last = ui->last->text().toInt();

    //获取数据库的销量
    //获取数据库剩余数量
    QSqlQuery query;
    QString sql = QString("select sell from brand where factory = '%1' and name = '%2'")
            .arg(ui->comboBoxFactory->currentText())
            .arg(ui->comboBoxBrand->currentText());
    //执行数据库
    query.exec(sql);

    int sell;
    while(query.next())
    {
        sell = query.value("sell").toInt();
    }
    //更新数据库，剩余数量，销售总量
    sell += num;

    sql = QString("update brand set sell = %1, last = %2 where factory = '%3' and name = '%4'")
                .arg(sell)
                .arg(last)
                .arg(ui->comboBoxFactory->currentText())
                .arg(ui->comboBoxBrand->currentText());
    query.exec(sql);

    //把确认后的数据，更新到xml中
    QStringList list;
    list << ui->comboBoxFactory->currentText()
         << ui->comboBoxBrand->currentText()
         << ui->lineEditPrice->text()
         << QString::number(num)
         << ui->lineEditTotal->text();
    DockXML::appendXML("../demo.xml", list);

    QStringList fList;
    QStringList bList;
    QStringList pList;
    QStringList nList;
    QStringList tList;
    DockXML::readXML("../demo.xml", fList, bList, pList, nList, tList);
    for(int i = 0; i < fList.size(); i++)
    {
        QString str = QString("%1:%2:卖出了%3,单价：%4,总价：%5")
                .arg(fList.at(i))
                .arg(bList.at(i))
                .arg(nList.at(i))
                .arg(pList.at(i))
                .arg(tList.at(i));

        ui->textEdit->append(str);

        qDebug() << str.toUtf8().data();
    }


    ui->buttonSure->setEnabled(false);
    on_buttonCancel_clicked();
}














