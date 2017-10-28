#ifndef FARM_ITERATOR_H
#define FARM_ITERATOR_H

#include "Backpack.h"

typedef std::vector<BackpackEntry*>::iterator backpackIte;

class BackpackIterator {
public:
    BackpackIterator() : index(0) {}

    // 重载等号运算符，在 application 中可以实现 backpackIterator = backpack，实现迭代器的行为
    void operator=(Backpack& backpack) {
        backpackIterator = backpack.begin();
    }

    BackpackEntry* next();
    BackpackEntry* currentItem();

private:
    backpackIte backpackIterator;
};


#endif //FARM_ITERATOR_H
