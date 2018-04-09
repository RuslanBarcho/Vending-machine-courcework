#ifndef VENDING_H
#define VENDING_H
#define QT_THREAD_SUPPORT
#include <qmutex.h>

class Vending
{
public:
    Vending();
    //BanknotesReceiver banknotesreciever;
private:
    QMutex mutex;
protected:
    int banknotesAmount[8] = {1, 1, 1, 2, 5, 5, 5, 5};
};

#endif // VENDING_H
