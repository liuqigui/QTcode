/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditPort;
    QLabel *label_2;
    QLineEdit *lineEditIP;
    QTextEdit *textEditRead;
    QTextEdit *textEditWrite;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonConnect;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(400, 300);
        gridLayout = new QGridLayout(ClientWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ClientWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        lineEditPort = new QLineEdit(ClientWidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 0, 2, 1, 2);

        label_2 = new QLabel(ClientWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        lineEditIP = new QLineEdit(ClientWidget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        gridLayout->addWidget(lineEditIP, 1, 2, 1, 2);

        textEditRead = new QTextEdit(ClientWidget);
        textEditRead->setObjectName(QStringLiteral("textEditRead"));
        textEditRead->setReadOnly(true);

        gridLayout->addWidget(textEditRead, 2, 0, 1, 6);

        textEditWrite = new QTextEdit(ClientWidget);
        textEditWrite->setObjectName(QStringLiteral("textEditWrite"));

        gridLayout->addWidget(textEditWrite, 3, 0, 1, 6);

        horizontalSpacer_2 = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 1, 1);

        pushButtonSend = new QPushButton(ClientWidget);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));

        gridLayout->addWidget(pushButtonSend, 4, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 3, 1, 1);

        pushButton_3 = new QPushButton(ClientWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 4, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(26, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 5, 1, 1);

        buttonConnect = new QPushButton(ClientWidget);
        buttonConnect->setObjectName(QStringLiteral("buttonConnect"));

        gridLayout->addWidget(buttonConnect, 0, 4, 2, 2);


        retranslateUi(ClientWidget);

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ClientWidget", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        lineEditPort->setText(QApplication::translate("ClientWidget", "8888", Q_NULLPTR));
        label_2->setText(QApplication::translate("ClientWidget", "\346\234\215\345\212\241\345\231\250IP\357\274\232", Q_NULLPTR));
        lineEditIP->setText(QApplication::translate("ClientWidget", "127.0.0.1", Q_NULLPTR));
        pushButtonSend->setText(QApplication::translate("ClientWidget", "send", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ClientWidget", "close", Q_NULLPTR));
        buttonConnect->setText(QApplication::translate("ClientWidget", "connect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
