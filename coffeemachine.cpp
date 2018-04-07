#include "coffeemachine.h"
#include "banknotesreceiver.h"
CoffeeMachine::CoffeeMachine()
{
    for(int i = 0; i< 5; i++){
        Coffee coffee;
        coffee.name = names[i];
        coffee.value = values[i];
        coffeeList.push_back(coffee);
    }
}
int CoffeeMachine::makeCoffee(int coffeeID, BanknotesReceiver &banknotesReceiver){
    if (coffeeList[coffeeID].value <= banknotesReceiver.userSumm){
        banknotesReceiver.userSumm = banknotesReceiver.userSumm - coffeeList[coffeeID].value;
        return 0;
    } else {
        return 1;
    }
}
