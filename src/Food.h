#ifndef FOOD_H
#define FOOD_H

#include "Item.h"

class Food : public Item {
public:
    virtual ~Food() = default;
    virtual int consume() const = 0;
    virtual const char* name() const = 0;
};

#endif
