#ifndef BACKPACK_H
#define BACKPACK_H

#include "BackpackEntry.h"
#include "BackpackIterator.h"
#include <vector>
#include <string>

class Backpack : public BackpackEntry {
public:
    virtual ~Backpack();
    void push_back(BackpackEntry* backpackEntry);
    virtual const char* name() const;
    bool remove(int index);
    BackpackIterator begin();
    BackpackIterator end();
private:
    std::vector<BackpackEntry*> backpack;
};

#endif // BACKPACK_H
