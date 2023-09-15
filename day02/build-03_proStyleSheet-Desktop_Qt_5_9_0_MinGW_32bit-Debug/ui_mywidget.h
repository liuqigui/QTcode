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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(770, 456);
        label = new QLabel(myWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 441, 141));
        label_2 = new QLabel(myWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 157, 54, 16));
        widget = new QWidget(myWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 305, 731, 111));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(310, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setIconSize(QSize(100, 100));
        pushButton->setFlat(false);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(310, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


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
