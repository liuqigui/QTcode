#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = 0);
    ~MyWidget();

signals:
    void mySignal(); //emit mySignal()

public slots:
    void mySlot();
};

#endif // MYWIDGET_H
