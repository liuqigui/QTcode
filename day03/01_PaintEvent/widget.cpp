#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPen>
#include <QBrush>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    x = 0;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
//    Qpainter p(this);
    QPainter p; //创建画家对象
    p.begin(this);  //指定当前窗口为绘图设备

    //绘图操作
//    p.drawxxx();
    //画背景图
//    p.drawPixmap(0, 0, width(), height(), QPixmap("../image/bk.jpg"));
    p.drawPixmap(rect(), QPixmap("../image/bk.jpg"));

    //定义画笔
    QPen pen;
    pen.setWidth(5);    //设置线宽
    pen.setColor(Qt::red);    //设置颜色
//    pen.setColor(QColor(255, 255, 255));   //RGB
    pen.setStyle(Qt::DashLine);

//    把画笔交给画家
    p.setPen(pen);

//    创建画刷对象
    QBrush brush;
    brush.setColor(Qt::red);
    brush.setStyle(Qt::Dense4Pattern);

//    把画刷交给画家
    p.setBrush(brush);


    //画直线
    p.drawLine(50, 50, 150, 50);
    p.drawLine(50, 50, 50, 150);

//    画矩形
    p.drawRect(150, 150, 100, 50);

//    画圆
    p.drawEllipse(QPoint(150, 150), 50, 25);

    //画笑脸
    p.drawPixmap(x, 180, 50, 50, QPixmap("../image/face.jpg"));

    p.end();
}

void Widget::on_pushButton_clicked()
{
    x += 20;
    if(x > width())
    {
        x = 0;
    }

//    刷新窗口，让窗口重绘
    update();   //简介调用paintEvent()

}
