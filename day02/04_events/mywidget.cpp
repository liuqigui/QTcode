#include "mywidget.h"
#include "ui_mywidget.h"
#include<QDebug>
#include<QKeyEvent>
#include <QMessageBox>
#include <QEvent>

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);

    timeId = this->startTimer(1000);    //毫秒为单位 每隔1s触发一次定时器
    this->timeId2 = this->startTimer(500);

    connect(ui->pushButton, &MyButton::clicked,
            [=]()
            {
               qDebug() << "按钮被按下";
            }
            );

    //安装过滤器
    ui->label_2->installEventFilter(this);
    ui->label_2->setMouseTracking(this);
}
myWidget::~myWidget()
{
    delete ui;
}

//键盘按下事件
void myWidget::keyPressEvent(QKeyEvent *event)
{
    qDebug() << (char)event->key();
    if(event->key() == Qt::Key_A)
    {
        qDebug() << "Qt::Key_A";
    }
}

//计时器
void myWidget::timerEvent(QTimerEvent *event)
{
    if(event->timerId() == this->timeId)
    {
        static int sec = 0;
        sec++;
        ui->label->setText(QString("<center><h1>time out: %1</h1></center>").arg(sec)
                           );

        if(5 == sec)
        {
            this->killTimer(this->timeId);
        }
    }
    else if(event->timerId() == this->timeId2)
    {
        static int sec = 0;
        ui->label_2->setText(
                    QString("<center><h1>time out: %1</h1></center>").arg(sec++)
                    );
    }

}

void myWidget::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "+++++++++++";
}

void myWidget::closeEvent(QCloseEvent *event)
{
    int ret = QMessageBox::question(this, "question", "是否需要关闭窗口");
    if(ret == QMessageBox::Yes)
    {
        //关闭窗口
        //处理关闭窗口事件，接收事件，事件就不会往下传递
        event->accept();
    }
    else
    {
        //不会关闭窗口
        //忽略事件，事件继续给父组件传递
        event->ignore();
    }

}

bool myWidget::event(QEvent *event)
{
    //事件分发
//    switch(e->type())
//    {
//    case QEvent::Close:
//        closeEvent(e);
//        break;
//    case QEvent::MouseMove:
//        mouseMoveEvent(e);
//        break;
//    }
    if(event->type() == QEvent::Timer)
    {
        //干掉定时器
        //如果返回true，事件停止传播
        QTimerEvent * env = static_cast<QTimerEvent *>(event);
        timerEvent(env);
        return true;
    }
    else if(event->type() == QEvent::KeyPress){
        QKeyEvent *env = static_cast<QKeyEvent *>(event);
        if(env->key() == Qt::Key_B){
            return QWidget::event(event);
        }
        return true;
    }
    else{
        return QWidget::event(event);
//        return false;
    }
}

bool myWidget::eventFilter(QObject *watched, QEvent *event){
    if(watched == ui->label_2){
        QMouseEvent *env = static_cast<QMouseEvent *>(event);
        //判断事件
        if(event->type() == QEvent::MouseMove){
            ui->label_2->setText(QString("Mouse move::(%1, %2)").arg(env->x()).arg(env->y()));
            return true;
        }
        if(event->type() == QEvent::MouseButtonPress){
            ui->label_2->setText(QString("Mouse move::(%1, %2)").arg(env->x()).arg(env->y()));
            return true;
        }
        if(event->type() == QEvent::MouseButtonRelease){
            ui->label_2->setText(QString("Mouse move::(%1, %2)").arg(env->x()).arg(env->y()));
            return true;
        }
        else{
            return QWidget::eventFilter(watched, event);
        }
    }
    else{
        return QWidget::eventFilter(watched, event);
    }

//    if(watched == ui->pushButton){

//    }
}
