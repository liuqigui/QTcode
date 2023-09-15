/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <mybutton.h>
#include <mylabel.h>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    MyLabel *label;
    QLabel *label_2;
    MyButton *pushButton;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(400, 300);
        label = new MyLabel(myWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, -10, 291, 211));
        label_2 = new QLabel(myWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 180, 241, 81));
        pushButton = new MyButton(myWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 250, 75, 23));

        retranslateUi(myWidget);

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "myWidget", Q_NULLPTR));
        label->setText(QApplication::translate("myWidget", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("myWidget", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("myWidget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
