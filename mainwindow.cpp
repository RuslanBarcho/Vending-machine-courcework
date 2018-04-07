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

void MainWindow::on_add_50_rubles_clicked()
{
    banknotesReceiver.addMoney(50);
    showUserMoney();
}

