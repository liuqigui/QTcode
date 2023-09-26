/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <histogram.h>
#include <pie.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCar;
    QAction *actionCalc;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *stackedWidget;
    QWidget *car;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBoxFactory;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBoxBrand;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEditPrice;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QSpinBox *spinBox;
    QLabel *label_9;
    QLabel *last;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEditTotal;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *buttonSure;
    QPushButton *buttonCancel;
    QSpacerItem *horizontalSpacer_5;
    QWidget *page_4;
    QTextEdit *textEdit;
    QWidget *calc;
    QGridLayout *gridLayout_3;
    QWidget *widgetZhu;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_10;
    QComboBox *comboBoxFactory_2;
    QSpacerItem *horizontalSpacer_8;
    Histogram *widgetW;
    QWidget *widgetPie;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_11;
    QComboBox *comboBoxBrand_2;
    QSpacerItem *horizontalSpacer_12;
    Pie *widgetH;
    QMenuBar *menuBar;
    QMenu *menu_guan_l;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(768, 562);
        actionCar = new QAction(MainWindow);
        actionCar->setObjectName(QStringLiteral("actionCar"));
        actionCalc = new QAction(MainWindow);
        actionCalc->setObjectName(QStringLiteral("actionCalc"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(296, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(26);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(296, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        car = new QWidget();
        car->setObjectName(QStringLiteral("car"));
        gridLayout_2 = new QGridLayout(car);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        splitter = new QSplitter(car);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setMinimumSize(QSize(300, 0));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 357, 374));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        comboBoxFactory = new QComboBox(page_2);
        comboBoxFactory->setObjectName(QStringLiteral("comboBoxFactory"));

        horizontalLayout->addWidget(comboBoxFactory);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        comboBoxBrand = new QComboBox(page_2);
        comboBoxBrand->setObjectName(QStringLiteral("comboBoxBrand"));

        horizontalLayout_2->addWidget(comboBoxBrand);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEditPrice = new QLineEdit(page_2);
        lineEditPrice->setObjectName(QStringLiteral("lineEditPrice"));

        horizontalLayout_3->addWidget(lineEditPrice);

        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        spinBox = new QSpinBox(page_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_5->addWidget(spinBox);

        label_9 = new QLabel(page_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        last = new QLabel(page_2);
        last->setObjectName(QStringLiteral("last"));

        horizontalLayout_5->addWidget(last);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEditTotal = new QLineEdit(page_2);
        lineEditTotal->setObjectName(QStringLiteral("lineEditTotal"));

        horizontalLayout_4->addWidget(lineEditTotal);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        buttonSure = new QPushButton(page_2);
        buttonSure->setObjectName(QStringLiteral("buttonSure"));

        horizontalLayout_6->addWidget(buttonSure);

        buttonCancel = new QPushButton(page_2);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        horizontalLayout_6->addWidget(buttonCancel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);

        toolBox->addItem(page_2, QString::fromUtf8("\345\207\272\345\224\256\350\275\246\350\276\206"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 357, 374));
        toolBox->addItem(page_4, QString::fromUtf8("\346\226\260\350\275\246\345\205\245\345\272\223"));
        splitter->addWidget(toolBox);
        textEdit = new QTextEdit(splitter);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);
        splitter->addWidget(textEdit);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        stackedWidget->addWidget(car);
        calc = new QWidget();
        calc->setObjectName(QStringLiteral("calc"));
        gridLayout_3 = new QGridLayout(calc);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widgetZhu = new QWidget(calc);
        widgetZhu->setObjectName(QStringLiteral("widgetZhu"));
        verticalLayout_3 = new QVBoxLayout(widgetZhu);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        label_10 = new QLabel(widgetZhu);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_7->addWidget(label_10);

        comboBoxFactory_2 = new QComboBox(widgetZhu);
        comboBoxFactory_2->setObjectName(QStringLiteral("comboBoxFactory_2"));

        horizontalLayout_7->addWidget(comboBoxFactory_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_7);

        widgetW = new Histogram(widgetZhu);
        widgetW->setObjectName(QStringLiteral("widgetW"));

        verticalLayout_3->addWidget(widgetW);


        gridLayout_3->addWidget(widgetZhu, 0, 0, 1, 1);

        widgetPie = new QWidget(calc);
        widgetPie->setObjectName(QStringLiteral("widgetPie"));
        verticalLayout_2 = new QVBoxLayout(widgetPie);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        label_11 = new QLabel(widgetPie);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_9->addWidget(label_11);

        comboBoxBrand_2 = new QComboBox(widgetPie);
        comboBoxBrand_2->setObjectName(QStringLiteral("comboBoxBrand_2"));

        horizontalLayout_9->addWidget(comboBoxBrand_2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_9);

        widgetH = new Pie(widgetPie);
        widgetH->setObjectName(QStringLiteral("widgetH"));

        verticalLayout_2->addWidget(widgetH);


        gridLayout_3->addWidget(widgetPie, 0, 1, 1, 1);

        stackedWidget->addWidget(calc);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 768, 23));
        menu_guan_l = new QMenu(menuBar);
        menu_guan_l->setObjectName(QStringLiteral("menu_guan_l"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_guan_l->menuAction());
        menu_guan_l->addSeparator();
        menu_guan_l->addAction(actionCar);
        menu_guan_l->addAction(actionCalc);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCar->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\347\256\241\347\220\206", nullptr));
        actionCalc->setText(QApplication::translate("MainWindow", "\351\224\200\345\224\256\347\273\237\350\256\241", nullptr));
        label->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\347\256\241\347\220\206", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\216\202\345\256\266\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\223\201\347\211\214\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\212\245\344\273\267\357\274\232", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\344\270\207", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\346\225\260\351\207\217\357\274\232", nullptr));
        last->setText(QApplication::translate("MainWindow", "20", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\351\207\221\351\242\235\357\274\232", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\344\270\207", nullptr));
        buttonSure->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        buttonCancel->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\345\207\272\345\224\256\350\275\246\350\276\206", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MainWindow", "\346\226\260\350\275\246\345\205\245\345\272\223", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\345\216\202\345\256\266\357\274\232", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\345\223\201\347\211\214\357\274\232", nullptr));
        menu_guan_l->setTitle(QApplication::translate("MainWindow", "\351\224\200\345\224\256\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
