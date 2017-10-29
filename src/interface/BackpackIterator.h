#ifndef BACKPACK_ITERATOR_H
#define BACKPACK_ITERATOR_H

#include "BackpackEntry.h"
#include <vector>

class Backpack;

class BackpackIterator {
    friend class Backpack;
public:
    BackpackIterator() = delete;
    BackpackIterator(const BackpackIterator&) = default;
    BackpackIterator& operator = (const BackpackIterator&) = default;
    ~BackpackIterator() = default;
    BackpackIterator operator ++ (void);
    BackpackIterator operator ++ (int);
    BackpackEntry* operator * (void);
    bool operator == (const BackpackIterator& bi);
    bool operator != (const BackpackIterator& bi);
private:
    BackpackIterator(std::vector<BackpackEntry*>::iterator it) {
        backpackIterator = it;
    }
    std::vector<BackpackEntry*>::iterator backpackIterator;
};

#endif // BACKPACK_ITERATOR_H
