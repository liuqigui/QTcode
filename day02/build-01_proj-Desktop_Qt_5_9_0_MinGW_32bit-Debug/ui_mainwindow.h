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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *button;
    QToolButton *toolButton;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QGroupBox *groupBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QCommandLinkButton *commandLinkButton;
    QScrollBar *horizontalScrollBar;
    QScrollBar *verticalScrollBar;
    QWidget *page_2;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton_7;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QFontComboBox *fontComboBox;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QDial *dial;
    QKeySequenceEdit *keySequenceEdit;
    QLabel *labelImage;
    QLabel *labelText;
    QLabel *labelUrl;
    QLabel *labelGif;
    QProgressBar *progressBar;
    QFrame *line;
    QFrame *line_2;
    QOpenGLWidget *openGLWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1034, 490);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        button = new QPushButton(centralWidget);
        button->setObjectName(QStringLiteral("button"));
        button->setGeometry(QRect(160, 120, 141, 61));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(-10, 100, 161, 111));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(600, 70, 91, 18));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(590, 140, 73, 18));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 240, 120, 80));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(679, 210, 100, 66));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 98, 64));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(160, 220, 231, 151));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        commandLinkButton = new QCommandLinkButton(page);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(40, 40, 168, 41));
        horizontalScrollBar = new QScrollBar(page);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(20, 130, 160, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        verticalScrollBar = new QScrollBar(page);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(210, 0, 16, 160));
        verticalScrollBar->setOrientation(Qt::Vertical);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        buttonBox = new QDialogButtonBox(page_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 90, 166, 20));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        stackedWidget->addWidget(page_2);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(570, 200, 80, 20));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(300, 100, 100, 118));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 4, 0, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(730, 120, 161, 22));
        fontComboBox = new QFontComboBox(centralWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(660, 300, 216, 22));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(560, 350, 113, 20));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(60, 330, 46, 22));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(50, 360, 64, 22));
        timeEdit = new QTimeEdit(centralWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(40, 390, 118, 22));
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(180, 400, 110, 22));
        dateTimeEdit = new QDateTimeEdit(centralWidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(310, 400, 194, 22));
        dial = new QDial(centralWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(740, 350, 50, 64));
        keySequenceEdit = new QKeySequenceEdit(centralWidget);
        keySequenceEdit->setObjectName(QStringLiteral("keySequenceEdit"));
        keySequenceEdit->setGeometry(QRect(70, 30, 113, 22));
        labelImage = new QLabel(centralWidget);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setGeometry(QRect(480, 20, 91, 51));
        labelText = new QLabel(centralWidget);
        labelText->setObjectName(QStringLiteral("labelText"));
        labelText->setGeometry(QRect(300, 60, 111, 41));
        labelUrl = new QLabel(centralWidget);
        labelUrl->setObjectName(QStringLiteral("labelUrl"));
        labelUrl->setGeometry(QRect(340, 50, 111, 61));
        labelGif = new QLabel(centralWidget);
        labelGif->setObjectName(QStringLiteral("labelGif"));
        labelGif->setGeometry(QRect(760, 40, 141, 51));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(820, 360, 118, 23));
        progressBar->setValue(24);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(560, 400, 341, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(510, 120, 20, 301));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        openGLWidget = new QOpenGLWidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(430, 90, 51, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1034, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(MainWindow);
        QObject::connect(button, SIGNAL(clicked()), MainWindow, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        button->setText(QApplication::translate("MainWindow", "^_^", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow", "123", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("MainWindow", "CommandLinkButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "\345\210\207\346\215\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
        );
        lineEdit->setText(QApplication::translate("MainWindow", "mike", Q_NULLPTR));
        labelImage->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        labelText->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        labelUrl->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        labelGif->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
