#include <QDebug>
#include <iostream>
#include "latte.h"

Latte::Latte()
{
    name = "Латте";
    timer = new QTimer();
    currentState = NOT_READY;
}
void Latte::make(){
    QTimer::connect(timer, SIGNAL(timeout()), this, SLOT(updateState()));
    currentState = PROCESSING;
    timer->start(1000);
}
void Latte::updateState(){
    std::cout << "updateLatteState" << std::endl;
    currentState = READY;
    timer->stop();
    coffeeReady();
    currentState = NOT_READY;
}
Latte::~Latte(){

}
