#ifndef VENDING_H
#define VENDING_H
#define QT_THREAD_SUPPORT
#include <qmutex.h>

class Vending
{
public:
    Vending();
private:
    QMutex mutex;
};

#endif // VENDING_H
