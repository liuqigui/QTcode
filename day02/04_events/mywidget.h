#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class myWidget;
}

class myWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myWidget(QWidget *parent = 0);
    ~myWidget();

protected:
    //键盘按下事件
    void keyPressEvent(QKeyEvent *event);

    //计时器事件
    void timerEvent(QTimerEvent *event);

    //鼠标按下事件
    void mousePressEvent(QMouseEvent *event);

    //鼠标关闭事件
    void closeEvent(QCloseEvent *event);

    //重写event事件
    bool event(QEvent *event);

    //重写事件过滤器
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::myWidget *ui;

    int timeId;
    int timeId2;
};

#endif // MYWIDGET_H
