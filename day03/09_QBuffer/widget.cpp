#include "widget.h"
#include "ui_widget.h"
#include <QBuffer>  //内存文件
#include <QDebug>
#include <QDataStream>
#include <QString>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QByteArray array;
    QBuffer memFile(&array);    //创建内存文件
    memFile.open(QIODevice::WriteOnly);

    memFile.write("11111111111111111");
    memFile.write("222222222222222222222");

    memFile.close();

    qDebug() << memFile.buffer();
    qDebug() << array << "array";

    QBuffer memFle1;
    memFle1.open(QIODevice::WriteOnly);
    QDataStream stream(&memFle1);
    stream << QString("测试") << 250;
    memFle1.close();
    qDebug() << memFle1.buffer();

    memFle1.open(QIODevice::ReadOnly);
    QDataStream stream1;
    stream1.setDevice(&memFle1);
    QString str;
    int a;
    stream1 >> str >> a;
    qDebug() << str.toUtf8().data() << a;

}

Widget::~Widget()
{
    delete ui;
}
