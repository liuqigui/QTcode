/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <smallwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_11;
    smallWidget *widget_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1016, 642);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(274, 9, 496, 237));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(380, 240));
        label->setPixmap(QPixmap(QString::fromUtf8("../01_proj/images/R-C.gif")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(100, 250, 801, 151));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(167, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(168, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_8 = new QSpacerItem(43, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(167, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(168, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalSpacer_9 = new QSpacerItem(167, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(80, 410, 861, 80));
        layoutWidget = new QWidget(widget_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 781, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        widget_4 = new smallWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(130, 500, 731, 80));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1016, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\347\231\273\351\231\206", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
