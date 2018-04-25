#include "icedcoffee.h"

IcedCoffee::IcedCoffee()
{
    name = "гляссе";
    value = 70;
    timer = new QTimer();
    QTimer::connect(timer, SIGNAL(timeout()), this, SLOT(updateState()));
    timer->setSingleShot(true);
    currentState = NOT_READY;
}
void IcedCoffee::make(){
    currentState = PROCESSING;
    coffeeState(name, currentState);
    timer->start(4000);
}
void IcedCoffee::updateState(){
    currentState = READY;
    timer->stop();
    coffeeState(name, currentState);
    currentState = NOT_READY;
}
