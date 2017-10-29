#ifndef FOOD_H
#define FOOD_H

#include "Item.h"

class Food : public Item {
public:
    virtual ~Food() = default;
    virtual const char* name() const = 0;
    virtual void usedBy(Player* player) = 0;
};

#endif
