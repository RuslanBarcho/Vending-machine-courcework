#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H
#include <QList>
#include "vending.h"
#include "banknotesreceiver.h"
#include "coffee.h"

class CoffeeMachine:Vending
{
public:
    CoffeeMachine();
    int values[5] = {60, 50, 60, 70, 45};
    QString names[5] = {"Капучино", "Латте", "Эспрессо", "Гляссе", "Горячий шоколад"};
    QList<Coffee> coffeeList;
    int makeCoffee(int coffeeID, BanknotesReceiver &banknotesReceiver);
};

#endif // COFFEEMACHINE_H
