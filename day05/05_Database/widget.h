#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_buttonDel_clicked();

    void on_buttonSure_clicked();

    void on_buttonCancel_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
