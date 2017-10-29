#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "BackpackEntry.h"

class Player;

class Item : public BackpackEntry {
public:
    virtual ~Item() = default;
    virtual void usedBy(Player* player) = 0;
    virtual const char* name() const = 0;
};

#endif
