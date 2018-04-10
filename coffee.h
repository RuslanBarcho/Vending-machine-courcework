#ifndef COFFEE_H
#define COFFEE_H
#include <QString>

class Coffee
{
public:
    int value;
    QString name;
    enum States {NOT_READY, PROCESSING, READY};
    States currentState;
};

#endif // COFFEE_H
