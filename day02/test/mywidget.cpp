#include "mywidget.h"
#include<QPushButton>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *button = new QPushButton("^_^", this);

    button->setGeometry(100, 100, 200, 200);

////    Qt4写法
//    connect(button, SIGNAL(clicked(bool)), this, SLOT(close()));

////    Qt5写法
//    connect(button, &QPushButton::clicked, this, &MyWidget::close);

    connect(button, &QPushButton::clicked,
            [=]()
            {
                button->setText("123");
            });

}

MyWidget::~MyWidget()
{

}
