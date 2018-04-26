#include "coffeemachine.h"
#include "latte.h"
#include "banknotesreceiver.h"
CoffeeMachine::CoffeeMachine()
{
    latte = new Latte();    
    cappuccino = new Cappuccino();
    espresso = new Espresso();
    icedCoffee = new IcedCoffee();
    hotCocoa = new HotCocoa();
    coffeeList.push_back(cappuccino);
    coffeeList.push_back(latte);
    coffeeList.push_back(espresso);
    coffeeList.push_back(icedCoffee);
    coffeeList.push_back(hotCocoa);
}
int CoffeeMachine::makeCoffee(int coffeeID, BanknotesReceiver &banknotesReceiver){
    if (coffeeList[coffeeID]->value <= banknotesReceiver.userSumm){
        banknotesReceiver.userSumm = banknotesReceiver.userSumm - coffeeList[coffeeID]->value;
        coffeeList[coffeeID]->make();
        return 0;
    } else {
        return 1;
    }
}


