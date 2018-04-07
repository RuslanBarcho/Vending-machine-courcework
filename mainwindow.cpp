#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showUserMoney(){
    ui->label_user_money->setText(QString::number(banknotesReceiver.userSumm));
}

void MainWindow::on_pushButton_2_clicked()
{
    if (coffeeMachine.makeCoffee(1, banknotesReceiver) == 0){
        ui->label_service->setText("Ваш Латте готов");
    } else {
        ui->label_service->setText("Недостаточно средств");
    }
    showUserMoney();
}


// cash control, in real this will be non-interface feature
void MainWindow::on_add_50_rubles_clicked()
{
    banknotesReceiver.addMoney(50);
    showUserMoney();
}

void MainWindow::on_add_100_rubles_clicked()
{
    banknotesReceiver.addMoney(100);
    showUserMoney();
}

void MainWindow::on_add_200_rubles_clicked()
{
    banknotesReceiver.addMoney(200);
    showUserMoney();
}

void MainWindow::on_add_500_rubles_clicked()
{
    banknotesReceiver.addMoney(500);
    showUserMoney();
}

