#include "mybutton.h"
#include <QMouseEvent>
#include <QDebug>

MyButton::MyButton(QWidget *parent) : QPushButton(parent)
{

}

void MyButton::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        qDebug() << "按下的是左键";
        //事件接收后，就回往下传递

        e->ignore();//忽略，事件继续往下传递，给谁传递？
    }
    else
    {
        //不做处理
        QPushButton::mousePressEvent(e);
    }

}
