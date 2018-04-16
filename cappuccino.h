#ifndef CAPPUCCINO_H
#define CAPPUCCINO_H
#include "coffee.h"

class Cappuccino: public Coffee
{

public:
    Cappuccino();
    void make();
public slots:
    void updateState();
};

#endif // CAPPUCCINO_H
