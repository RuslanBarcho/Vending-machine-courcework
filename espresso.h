#ifndef ESPRESSO_H
#define ESPRESSO_H
#include "coffee.h"

class Espresso: public Coffee
{
public:
    Espresso();
    void make();
public slots:
    void updateState();
};

#endif // ESPRESSO_H
