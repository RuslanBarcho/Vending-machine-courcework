#include "banknotesreceiver.h"

BanknotesReceiver::BanknotesReceiver()
{
    userSumm = 0;
}
void BanknotesReceiver::addMoney(int amount){
    switch (amount) {
    case 50:
        userBanknotesAmount[0]++;

        break;
    case 100:
        userBanknotesAmount[1]++;
        break;
    case 200:
        userBanknotesAmount[2]++;
        break;
    case 500:
        userBanknotesAmount[3]++;
        break;
    default:
        break;
    }
}
