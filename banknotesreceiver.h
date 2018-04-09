#ifndef BANKNOTESRECEIVER_H
#define BANKNOTESRECEIVER_H
#include "vending.h"

class BanknotesReceiver:Vending
{
public:
    BanknotesReceiver();
    int userBanknotesAmount[4];
    int userCoinsAmount[4];
    int userSumm;   
    friend class MainWindow;
private:
    void addMoney(int amount);
    int giveChange();
};

#endif // BANKNOTESRECEIVER_H
