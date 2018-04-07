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

private:
    Ui::MainWindow *ui;
    Vending vending;
    CoffeeMachine coffeeMachine;
    BanknotesReceiver banknotesReceiver;
    void showUserMoney();
};

#endif // MAINWINDOW_H
