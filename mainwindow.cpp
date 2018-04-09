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
//void to display inserted money
void MainWindow::showUserMoney(){
    ui->label_user_money->setText(QString::number(banknotesReceiver.userSumm) + "р");
}
//confirmation of coffee order by clicking button
void MainWindow::coffeeConfirm(int coffeeID){
    if (coffeeMachine.makeCoffee(coffeeID, banknotesReceiver) == 0){
        ui->label_service->setText("Ваш " + coffeeMachine.coffeeList[coffeeID].name + " готов");
        showUserMoney();
    } else {
        ui->label_service->setText("Недостаточно средств");
    }
}
//coffee order buttons
void MainWindow::on_pushButton_clicked()
{
    coffeeConfirm(0);
}
void MainWindow::on_pushButton_2_clicked()
{
    coffeeConfirm(1);
}
void MainWindow::on_pushButton_3_clicked()
{
    coffeeConfirm(2);
}
void MainWindow::on_pushButton_4_clicked()
{
    coffeeConfirm(3);
}
void MainWindow::on_pushButton_5_clicked()
{
    coffeeConfirm(4);
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

void MainWindow::on_give_change_clicked()
{
    ui->label_service->setText("Тест сдачи " + QString::number(banknotesReceiver.giveChange()));
}
