#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    int money={0};

    void changeMoney(int n);

private slots:
    void on_pb10_clicked();

    void on_pb50_clicked();

    void on_pb100_clicked();

    void on_pb500_clicked();

    void on_pbCoffee_clicked();

    void on_pbTea_clicked();

    void on_pbGongCha_clicked();

    void on_resetButton_clicked();

    //void on_lcdNumber_windowIconTextChanged(const QString &iconText);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
