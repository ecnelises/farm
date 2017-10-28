//
// Sheep.h
// 绵羊类
//
#ifndef SHEEP_H
#define SHEEP_H

#include "Animal.h"

class Item;

class Sheep : public Animal {
public:
    Sheep() = default;
    virtual ~Sheep() = default;
    virtual Animal* clone(void) const;
    virtual Item* pick(void);
    virtual const char* typeName(void) const;
};

#endif // SHEEP_H
