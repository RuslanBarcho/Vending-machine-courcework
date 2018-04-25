#ifndef ICEDCOFFEE_H
#define ICEDCOFFEE_H
#include "coffee.h"

class IcedCoffee: public Coffee
{
public:
    IcedCoffee();
    void make();
public slots:
    void updateState();
};

#endif // ICEDCOFFEE_H
