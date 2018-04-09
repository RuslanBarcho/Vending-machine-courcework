#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vending.h"
#include "coffeemachine.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_add_50_rubles_clicked();

    void on_add_100_rubles_clicked();

    void on_add_200_rubles_clicked();

    void on_add_500_rubles_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_give_change_clicked();

private:
    Ui::MainWindow *ui;
    Vending vending;
    CoffeeMachine coffeeMachine;
    BanknotesReceiver banknotesReceiver;
    void showUserMoney();
    void coffeeConfirm(int cofeeID);
};

#endif // MAINWINDOW_H
