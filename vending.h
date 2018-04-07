#ifndef VENDING_H
#define VENDING_H
#define QT_THREAD_SUPPORT
#include <qmutex.h>

class Vending
{
public:
    Vending();
    //BanknotesReceiver banknotesreciever;
    int banknotesAmount[4];
    int coinsAmount[4];
private:
    QMutex mutex;
};

#endif // VENDING_H
