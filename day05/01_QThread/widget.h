#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>   //定时器头文件
#include "mythread.h"   //线程头文件

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void dealTimeout(); //定时器槽函数
    void dealDone();    //线程结束槽函数
    void stopThread();  //停止线程槽函数

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;

    QTimer *myTimer; //声明定时器
    MyThread *thread;

};

#endif // WIDGET_H
