#include <iostream>
#include "latte.h"

Latte::Latte()
{
    name = "латте";
    timer = new QTimer();
    QTimer::connect(timer, SIGNAL(timeout()), this, SLOT(updateState()));
    timer->setSingleShot(true);
    currentState = NOT_READY;
}
void Latte::make(){   
    currentState = PROCESSING;
    coffeeState(name, currentState);
    timer->start(3000);
}
void Latte::updateState(){
    currentState = READY;
    std::cout << "LatteReady" << std::endl;
    coffeeState(name, currentState);
    currentState = NOT_READY;
}
Latte::~Latte(){

}
