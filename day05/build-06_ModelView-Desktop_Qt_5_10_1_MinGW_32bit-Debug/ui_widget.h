/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *buttonAdd;
    QPushButton *buttonSure;
    QPushButton *buttonCancel;
    QPushButton *buttonFind;
    QPushButton *buttonDel;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 347);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(Widget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 5);

        buttonAdd = new QPushButton(Widget);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));

        gridLayout->addWidget(buttonAdd, 1, 0, 1, 1);

        buttonSure = new QPushButton(Widget);
        buttonSure->setObjectName(QStringLiteral("buttonSure"));

        gridLayout->addWidget(buttonSure, 1, 3, 1, 1);

        buttonCancel = new QPushButton(Widget);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        gridLayout->addWidget(buttonCancel, 1, 4, 1, 1);

        buttonFind = new QPushButton(Widget);
        buttonFind->setObjectName(QStringLiteral("buttonFind"));

        gridLayout->addWidget(buttonFind, 2, 4, 1, 1);

        buttonDel = new QPushButton(Widget);
        buttonDel->setObjectName(QStringLiteral("buttonDel"));

        gridLayout->addWidget(buttonDel, 1, 1, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        buttonAdd->setText(QApplication::translate("Widget", "\345\242\236\345\212\240", nullptr));
        buttonSure->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
        buttonCancel->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        buttonFind->setText(QApplication::translate("Widget", "\346\237\245\346\211\276", nullptr));
        buttonDel->setText(QApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        label->setText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\207\272\346\237\245\346\211\276\347\232\204\344\272\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
