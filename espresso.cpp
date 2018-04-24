#include "espresso.h"

Espresso::Espresso()
{
    name = "эспрессо";
    value = 60;
    timer = new QTimer();
    QTimer::connect(timer, SIGNAL(timeout()), this, SLOT(updateState()));
    timer->setSingleShot(true);
    currentState = NOT_READY;
}
void Espresso::make(){
    currentState = PROCESSING;
    coffeeState(name, currentState);
    timer->start(1000);
}
void Espresso::updateState(){
    currentState = READY;
    timer->stop();
    coffeeState(name, currentState);
    currentState = NOT_READY;
}
