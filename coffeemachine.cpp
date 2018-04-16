#include "coffeemachine.h"
#include "latte.h"
#include "banknotesreceiver.h"
CoffeeMachine::CoffeeMachine()
{
    latte = new Latte();
    cappuccino = new Cappuccino();
    for(int i = 0; i< 5; i++){
        Coffee* coffee = new Coffee();
        coffee->name = names[i];
        coffee->value = values[i];
        coffeeList.push_back(coffee);
    }
}
int CoffeeMachine::makeCoffee(int coffeeID, BanknotesReceiver &banknotesReceiver){
    if (coffeeList[coffeeID]->value <= banknotesReceiver.userSumm){
        banknotesReceiver.userSumm = banknotesReceiver.userSumm - coffeeList[coffeeID]->value;
        switch(coffeeID){
        case 0:{
            cappuccino->make();
            return 0;
        }
            break;
        case 1:{
            latte->make();
            return 0;
        }
            break;
        default:
        return 1;
            break;
        }

    } else {
        return 1;
    }
}


