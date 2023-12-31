#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

    //自定义槽函数
    void dealNum();

private slots:
    void on_pushButtonStart_clicked();

private:
    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
