#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

//Window constructor
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer();
    timer->setSingleShot(true);
    QTimer::connect(timer, SIGNAL(timeout()), this, SLOT(resetScreen()));
    //implemention interfaces of different Coffee objects types
    for (int i = 0; i< coffeeMachine.coffeeList.size(); i++){
        connect(coffeeMachine.coffeeList[i], &Coffee::coffeeState, this, &MainWindow::coffeeReady);
    }
}
//Window destructor
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
    if (!isInProgress){
        if (coffeeMachine.makeCoffee(coffeeID, banknotesReceiver) == 0){
            showUserMoney();
        } else {
            ui->label_service->setText("Недостаточно средств");
            timer->start(4000);
        }
    }
}
void MainWindow::resetScreen(){
    if (!isInProgress){
    ui->label_service->setText("Добро пожаловать!");
    }
}
//void to give change if it's posible
void MainWindow::on_give_change_clicked()
{
    int temp = banknotesReceiver.giveChange();
    if (temp == -1){
        ui->label_service->setText("Невозможно выдать сдачу, обратитесь в тех. поддержку");
    } else {
        ui->label_service->setText("Ваша сдача: " + QString::number(temp));
        showUserMoney();
    }
    timer->start(4000);
}
//implemented interface from Coffee cobject to do something when Coffee object status updates
void MainWindow::coffeeReady(QString name, Coffee::States state){
    switch (state) {
    case Coffee::READY:
        ui->label_service->setText("Ваш " + name + " готов!");
        isInProgress = false;
        timer->start(4000);
        break;
    case Coffee::PROCESSING:
        ui->label_service->setText("Ваш " + name + " готовится");
        std::cout << "CoffeeProcessing" << std::endl;
        isInProgress = true;
        break;
    default:
        break;
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

void MainWindow::on_add_1_ruble_clicked()
{
    banknotesReceiver.addMoney(1);
    showUserMoney();
}

void MainWindow::on_add_2_rubles_clicked()
{
    banknotesReceiver.addMoney(2);
    showUserMoney();
}

void MainWindow::on_add_5_rubles_clicked()
{
    banknotesReceiver.addMoney(5);
    showUserMoney();
}

void MainWindow::on_add_10_rubles_clicked()
{
    banknotesReceiver.addMoney(10);
    showUserMoney();
}
