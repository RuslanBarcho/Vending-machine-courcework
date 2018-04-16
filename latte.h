#ifndef LATTE_H
#define LATTE_H
#include "coffee.h"

class Latte:public Coffee
{
public:
    Latte();
    ~Latte();
    void make();
public slots:
    void updateState();
};

#endif // LATTE_H
