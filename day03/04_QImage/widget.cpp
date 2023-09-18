#include "widget.h"
#include "ui_widget.h"
#include <QImage>
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

//    创建一个绘图设备， QImage::Format_ARGB32背景是透明
    QImage image(400, 300, QImage::Format_ARGB32);
    QPainter p;
    p.begin(&image);

    //绘图
    p.drawImage(0, 0, QImage("../image/face.jpg"));

//    对绘图设备前50个像素点进行设置
    for(int i = 0;i < 50; i++)
    {
        for(int j = 0; j < 50; j++)
        {
            image.setPixel(QPoint(i, j), qRgb(0, 255, 0));
//            image.pixel(QPoint(i, j));
        }
    }



    p.end();

    image.save("../image.jpg");

}

Widget::~Widget()
{
    delete ui;
}
