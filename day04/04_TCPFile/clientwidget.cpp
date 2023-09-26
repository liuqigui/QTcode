#include "clientwidget.h"
#include "ui_clientwidget.h"
#include <QDebug>
#include <QMessageBox>
#include <QHostAddress>

ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);

    tcpSocket = new QTcpSocket(this);

    isStart = true;

    ui->progressBar->setValue(0);   //当前值

    setWindowTitle("客户端");

    connect(tcpSocket, &QTcpSocket::readyRead,
            [=]()
    {
        //取出接收的内容
        QByteArray buf = tcpSocket->readAll();

        if(true == isStart)
        {
            //接收头
            isStart = false;
            //解析头部信息 QString buf = "hello##1024"
            fileName = QString(buf).section("##", 0, 0);
            fileSize = QString(buf).section("##", 1, 1).toInt();
            recvSize = 0;
            //初始化
            //打开文件
            file.setFileName(fileName);

            bool isOk = file.open(QIODevice::WriteOnly);
            if(false == isOk)
            {
                qDebug() << "WriteOnly error 40";

                tcpSocket->disconnectFromHost(); //断开连接
                tcpSocket->close(); //关闭套接字

                return; //如果打开文件失败，中断函数
            }

            //弹出对话框，显示接收文件的信息
            QString str = QString("接收的文件: [%1: %2kb]").arg(fileName).arg(fileSize/1024);
//            QMessageBox::information(this, "文件信息", str);

            //设置进度条
            ui->progressBar->setMinimum(0); //最小值
            ui->progressBar->setMaximum(fileSize/1024); //最大值
            ui->progressBar->setValue(0); //当前值


        }
        else    //文件信息
        {
            qint64 len = file.write(buf);

            if(len > 0)
            {
                recvSize += len;
                QString str = QString::number(recvSize);
                tcpSocket->write(str.toUtf8().data());
                qDebug() << "str = " << str;

//                qDebug() << len;
            }
            //更新进度条
            ui->progressBar->setValue(recvSize/1024);
//            ui->progressBar->setValue(100);


            if(recvSize == fileSize)    //文件接收完毕
            {
                //先给服务器发送（接收文件完成的信息）
                tcpSocket->write("file done");

                //关闭文件                
                QMessageBox::information(this, "完成", "文件接收完成");
                file.close();

                //断开连接
                tcpSocket->disconnectFromHost();
                tcpSocket->close();
            }

        }
    }


            );



}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_buttonConnect_clicked()
{
    //获取服务器的ip和端口
    QString ip = ui->lineEditIP->text();
    quint16 port = ui->lineEditPort->text().toInt();

    tcpSocket->connectToHost(QHostAddress(ip), port);
}
