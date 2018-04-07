#ifndef BANKNOTESRECEIVER_H
#define BANKNOTESRECEIVER_H
#include "vending.h"

class BanknotesReceiver:Vending
{
public:
    BanknotesReceiver();
    void addMoney(int amount);
    int userBanknotesAmount[];
    int userCoinsAmount[4];
    int userSumm;
};

#endif // BANKNOTESRECEIVER_H
