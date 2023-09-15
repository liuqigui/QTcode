#include "mylabel.h"
#include<QMouseEvent>
#include<QDebug>

MyLabel::MyLabel(QWidget *parent) : QLabel(parent)
{
    this->setMouseTracking(true);
}

//    鼠标摁下事件
void MyLabel::mousePressEvent(QMouseEvent *ev)
{
    int i = ev->x();
    int j = ev->y();

    //sprinf
    /*
        QString str = QString("abc %1 ^_^ %2").arg(123).arg("mike");
        str = abc 123 ^_^ mike
    */

    /*  */
    if(ev->button() == Qt::LeftButton){
        qDebug() << "left";
    }else if(ev->button() == Qt::RightButton){
        qDebug() << "right";
    }else if(ev->button() == Qt::MidButton){
        qDebug() << "mid";
    }


    QString text = QString("<center><h1>Mouse Press: (%1, %2)</h1></center>").arg(i).arg(j);
    this->setText(text);
}

//    鼠标释放事件
void MyLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    QString text = QString("<center><h1>Mouse Release: (%1, %2)</h1></center>").arg(ev->x()).arg(ev->y());
    this->setText(text);
}

//    鼠标移动事件
void MyLabel::mouseMoveEvent(QMouseEvent *ev)
{
    QString text = QString("<center><h1>Mouse Move: (%1, %2)</h1></center>").arg(ev->x()).arg(ev->y());
//    this->setText(text);
}

//    进入窗口区域
void MyLabel::enterEvent(QEvent *event)
{
    QString text = QString("<center><h1>Mouse enter</h1></center>");
    this->setText(text);
}


//    离开窗口区域
void MyLabel::leaveEvent(QEvent *event)
{
    QString text = QString("<center><h1>Mouse leave</h1></center>");
    this->setText(text);
}
