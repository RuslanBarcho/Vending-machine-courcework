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
    int banknotesAmount[8] = {5, 5, 5, 5, 5, 0, 0, 0};
};

#endif // VENDING_H
