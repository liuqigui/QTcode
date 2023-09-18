#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QBitmap>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    //QPixmap 图片背景透明
    p.drawPixmap(0, 0, 100, 100, QPixmap("../image/butterfly.jpg"));
    //QBitmap 图片背景透明
    p.drawPixmap(200, 0, 100, 100, QBitmap("../image/butterfly.jpg"));

    //QPixmap 图片背景白色
    QPixmap pixmap;
    pixmap.load("../image/butterfly1.jpg");
    p.drawPixmap(0, 200, 100, 100, pixmap);

    //QBitmap 背景背景白色
    QBitmap bitmap;
    bitmap.load("../image/butterfly1.jpg");
    p.drawPixmap(200, 200, 100, 100, bitmap);

}
