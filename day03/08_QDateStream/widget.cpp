#include "widget.h"
#include "ui_widget.h"
#include <QDataStream>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#define cout qDebug() << "[" << __FILE__ << ":" << __LINE__ << "]"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    writeData();
    readData();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::writeData()
{
    //创建文件对象
    QFile file("../test.txt");

    //打开文件, 以只写方式打开
    bool isOk = file.open(QIODevice::WriteOnly);
    if(true == isOk)
    {
        //创建数据流，和file文件关联
        //往数据流中输入数据，相当于往文件里写数据
        QDataStream stream(&file);

        stream << QString("主要看气质") << 250;

        file.close();
    }

}

void Widget::readData()
{
    //创建文件对象
    QFile file("../test.txt");

    //打开文件, 以只写方式打开
    bool isOk = file.open(QIODevice::ReadOnly);
    if(true == isOk)
    {
        //创建数据流，和file文件关联
        //往数据流中输入数据，相当于往文件里读数据
        QDataStream stream(&file);

        //读的时候，按写的顺序取数据
        QString str;
        int a;
        stream >> str >> a;
        //qDebug() << str.toUtf8().data() << a;
        cout << str << a;

        file.close();
    }
}
