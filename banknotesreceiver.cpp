#include "banknotesreceiver.h"

BanknotesReceiver::BanknotesReceiver()
{
    userSumm = 0;
}

int BanknotesReceiver::giveChange(){
    int change = 0;
    int banknotesTypes[8] = {500, 200, 100, 50, 10, 5, 2, 1};
    int userMoneyCopy = userSumm;
    for (int i = 0; i<8; ++i){
        while (banknotesAmount[i]>0 & userMoneyCopy >= banknotesTypes[i]){
            change += banknotesTypes[i];
            userMoneyCopy -= banknotesTypes[i];
            banknotesAmount[i]--;
        }
    }
    if (change != userSumm) change = -1; else userSumm = 0;
    return change;
}

void BanknotesReceiver::addMoney(int amount){
    switch (amount) {
    case 50:
        userSumm = userSumm + 50;
        banknotesAmount[3]++;
        break;
    case 100:
        userSumm = userSumm + 100;
        banknotesAmount[2]++;
        break;
    case 200:
        userSumm = userSumm + 200;
        banknotesAmount[1]++;
        break;
    case 500:
        userSumm = userSumm + 500;
        banknotesAmount[0]++;
        break;
    case 1:
        userSumm = userSumm + 1;
        banknotesAmount[7]++;
        break;
    case 2:
        userSumm = userSumm + 2;
        banknotesAmount[6]++;
        break;
    case 5:
        userSumm = userSumm + 5;
        banknotesAmount[5]++;
        break;
    case 10:
        userSumm = userSumm + 10;
        banknotesAmount[4]++;
        break;
    default:
        break;
    }
}
