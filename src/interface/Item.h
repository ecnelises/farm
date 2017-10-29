//modify by nature
#ifndef ITEM_H
#define ITEM_H

#include <string>

class Player;

class Item {
public:
    virtual ~Item() = default;
    virtual void usedBy(Player* player) = 0;
    virtual const char* name() const = 0;
};

#endif
