#include "hotcocoa.h"

HotCocoa::HotCocoa()
{
    name = "горяий шоколад";
    value = 45;
    timer = new QTimer();
    QTimer::connect(timer, SIGNAL(timeout()), this, SLOT(updateState()));
    timer->setSingleShot(true);
    currentState = NOT_READY;
}
void HotCocoa::make(){
    currentState = PROCESSING;
    coffeeState(name, currentState);
    timer->start(6000);
}
void HotCocoa::updateState(){
    currentState = READY;
    timer->stop();
    coffeeState(name, currentState);
    currentState = NOT_READY;
}
