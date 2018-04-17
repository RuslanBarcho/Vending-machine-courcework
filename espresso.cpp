#include "espresso.h"

Espresso::Espresso()
{
    name = "Эспрессо";
    timer = new QTimer();
    currentState = NOT_READY;
}
void Espresso::make(){
    QTimer::connect(timer, SIGNAL(timeout()), this, SLOT(updateState()));
    currentState = PROCESSING;
    timer->start(1000);
}
void Espresso::updateState(){
    currentState = READY;
    timer->stop();
    coffeeReady();
    currentState = NOT_READY;
}
