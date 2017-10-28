//
// Wheat.h
// 小麦类，作为作物类的实现
//
#ifndef WHEAT_H
#define WHEAT_H

#include "Crop.h"
#include <string>

class Item;

class Wheat : public Crop {
public:
    Wheat() = default;
    virtual ~Wheat() = default;
    virtual Item* pick(void);
    virtual const char* typeName(void) const;
};

#endif // WHEAT_H
