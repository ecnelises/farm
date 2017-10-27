#ifndef BACKPACK_H
#define BACKPACK_H

#include "vector"
#include "BackpackEntry.h"

class Backpack : public BackpackEntry {
public:
    std::vector<BackpackEntry*> backpack;

    void show();
    void push_back(BackpackEntry* backpackEntry);
    bool remove();
};

#endif // BACKPACK_H
