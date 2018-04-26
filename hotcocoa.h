#ifndef HOTCOCOA_H
#define HOTCOCOA_H
#include "coffee.h"

class HotCocoa: public Coffee
{
public:
    HotCocoa();
    void make();
public slots:
    void updateState();
};

#endif // HOTCOCOA_H
