#include "banknotesreceiver.h"

BanknotesReceiver::BanknotesReceiver()
{
    userSumm = 0;
    for(int i = 0; i< 4; i++){
        userBanknotesAmount[i] = 0;
    }
}
void BanknotesReceiver::addMoney(int amount){
    switch (amount) {
    case 50:
        userSumm = userSumm + 50;
        userBanknotesAmount[0]++;
        break;
    case 100:
        userSumm = userSumm + 100;
        userBanknotesAmount[1]++;
        break;
    case 200:
        userSumm = userSumm + 200;
        userBanknotesAmount[2]++;
        break;
    case 500:
        userSumm = userSumm + 500;
        userBanknotesAmount[3]++;
        break;
    default:
        break;
    }
}
