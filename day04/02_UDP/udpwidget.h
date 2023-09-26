#ifndef UDPWIDGET_H
#define UDPWIDGET_H

#include <QWidget>
#include <QUdpSocket>   //UDP套接字

namespace Ui {
class UDPWidget;
}

class UDPWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UDPWidget(QWidget *parent = 0);
    ~UDPWidget();

    void dealMsg(); //槽函数，处理对方发过来的数据

private slots:
    void on_buttonSend_clicked();

private:
    Ui::UDPWidget *ui;

    QUdpSocket *udpSocket;   //UDP套接字
};

#endif // UDPWIDGET_H
