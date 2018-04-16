#include "cappuccino.h"

Cappuccino::Cappuccino()
{
    name = "Капучино";
    timer = new QTimer();
    currentState = NOT_READY;
}
void Cappuccino::make(){
    QTimer::connect(timer, SIGNAL(timeout()), this, SLOT(updateState()));
    currentState = PROCESSING;
    timer->start(5000);
}
void Cappuccino::updateState(){
    currentState = READY;
    timer->stop();
    coffeeReady();
    currentState = NOT_READY;
}
