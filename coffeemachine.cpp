#include "coffeemachine.h"
#include "latte.h"
#include "banknotesreceiver.h"
CoffeeMachine::CoffeeMachine()
{
    latte = new Latte();    
    cappuccino = new Cappuccino();
    espresso = new Espresso();
    coffeeList.push_back(cappuccino);
    coffeeList.push_back(latte);
    coffeeList.push_back(espresso);
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
        case 2:{
            espresso->make();
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


