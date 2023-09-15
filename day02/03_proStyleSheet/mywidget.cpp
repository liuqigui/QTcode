#include "mywidget.h"
#include "ui_mywidget.h"
#include<QLabel>

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);

    this->setStyleSheet("QLabel{color:rgb(0, 255, 255);"
                        "background-color:red};");

    ui->label->setStyleSheet("QLabel{color:rgb(0, 255, 255);"
                             "background-color:blue;"
                             "border-image:url(:/new/prefix1/IMG_20230221_081131.jpg) 30 30 30 4 stretch stretch;"
                             "};");
    ui->pushButton->setStyleSheet("QPushButton{"
                                  "border-image:url(::/new/prefix1/IMG_20230221_081131.jpg);"
                                  "}"
                                  "QPushButton:hover{"
                                  "border-image:url(:/new/prefix1/研究生学生证.jpg)"
                                  "}"
                                  "QPushBotton:pressed{"
                                  "border-image:url(:/new/prefix1/IMG_20210705_210539.jpg)"
                                  "}");

}

myWidget::~myWidget()
{
    delete ui;
}
