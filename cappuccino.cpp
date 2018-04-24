#include "cappuccino.h"
#include <iostream>

Cappuccino::Cappuccino()
{
    name = "капучино";
    value = 60;
    timer = new QTimer();
    QTimer::connect(timer, SIGNAL(timeout()), this, SLOT(updateState()));
    timer->setSingleShot(true);
    currentState = NOT_READY;
}
void Cappuccino::make(){
    currentState = PROCESSING;
    coffeeState(name, currentState);
    timer->start(5000);
}
void Cappuccino::updateState(){
    currentState = READY;
    coffeeState(name, currentState);
    std::cout << "updateCappuccinoState" << std::endl;
    timer->stop();
    currentState = NOT_READY;
}
