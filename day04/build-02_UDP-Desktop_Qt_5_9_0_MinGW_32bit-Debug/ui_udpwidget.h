/********************************************************************************
** Form generated from reading UI file 'udpwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPWIDGET_H
#define UI_UDPWIDGET_H

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

class Ui_UDPWidget
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditPort;

    void setupUi(QWidget *UDPWidget)
    {
        if (UDPWidget->objectName().isEmpty())
            UDPWidget->setObjectName(QStringLiteral("UDPWidget"));
        UDPWidget->resize(400, 300);
        gridLayout = new QGridLayout(UDPWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(UDPWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 2, 0, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        buttonSend = new QPushButton(UDPWidget);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));

        gridLayout->addWidget(buttonSend, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(65, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 2, 1, 1);

        pushButton_2 = new QPushButton(UDPWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(65, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 4, 1, 1);

        label_2 = new QLabel(UDPWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(UDPWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditIP = new QLineEdit(UDPWidget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        gridLayout->addWidget(lineEditIP, 0, 1, 1, 4);

        lineEditPort = new QLineEdit(UDPWidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 1, 1, 1, 4);


        retranslateUi(UDPWidget);

        QMetaObject::connectSlotsByName(UDPWidget);
    } // setupUi

    void retranslateUi(QWidget *UDPWidget)
    {
        UDPWidget->setWindowTitle(QApplication::translate("UDPWidget", "UDPWidget", Q_NULLPTR));
        buttonSend->setText(QApplication::translate("UDPWidget", "send", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("UDPWidget", "close", Q_NULLPTR));
        label_2->setText(QApplication::translate("UDPWidget", "\345\257\271\346\226\271\347\232\204\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("UDPWidget", "\345\257\271\346\226\271\347\232\204IP\357\274\232", Q_NULLPTR));
        lineEditIP->setText(QApplication::translate("UDPWidget", "127.0.0.1", Q_NULLPTR));
        lineEditPort->setText(QApplication::translate("UDPWidget", "9999", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UDPWidget: public Ui_UDPWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPWIDGET_H
