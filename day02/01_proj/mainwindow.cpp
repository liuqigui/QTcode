#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QCompleter>
#include<QStringList>
#include<QMovie>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->button->setText("123");

    connect(ui->button, &QPushButton::clicked, this, close);

//    QLineEdit
    QString str = ui->lineEdit->text(); //获取内容
    qDebug() << str;

//    设置内容
    ui->lineEdit->setText("123456");

//    设置内容显示方式
    ui->lineEdit->setTextMargins(15, 0, 0, 0);

//    设置内容密码
//    ui->lineEdit->setEchoMode(QLineEdit::Password);

    QStringList list;
    list << "hello" << "how are you" << "hehe";

    QCompleter *com = new QCompleter(list, this);
    com->setCaseSensitivity(Qt::CaseInsensitive);

    ui->lineEdit->setCompleter(com);

//    label
    ui->labelText->setText("123");  //设置文本内容

    ui->labelImage->setPixmap(QPixmap("://images/IMG_20230221_081131.jpg"));    // 设置图片

    ui->labelImage->setScaledContents(true);

//    动画
    QMovie *myQMovie = new QMovie("://images/R-C.gif");
    ui->labelGif->setMovie(myQMovie);
    myQMovie->start();  //动画启动
    ui->labelGif->setScaledContents(true);

//    链接
    ui->labelUrl->setText("<h1><a href=\"https://www.baidu.com\">"
                          "百度一下</a></h1>");
    ui->labelUrl->setOpenExternalLinks(true);




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_7_clicked()
{
    static int i = 0;
    ui->stackedWidget->setCurrentIndex(++i % 2);
}
