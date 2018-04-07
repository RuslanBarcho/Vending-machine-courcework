#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H
#include "vending.h"
#include "banknotesreceiver.h"

class CoffeeMachine:Vending
{
public:
    CoffeeMachine();
    BanknotesReceiver banknotesReceiver;
};

#endif // COFFEEMACHINE_H
