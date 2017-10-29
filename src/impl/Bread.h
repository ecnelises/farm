//
// Bread.h
// 面包类
// 面包是小麦的产物
//
#ifndef BREAD_H
#define BREAD_H

#include "Food.h"

class Bread : public Food {
public:
    virtual ~Bread() = default;
    virtual const char* name(void) const;
    virtual void usedBy(Player* player);
};

#endif
