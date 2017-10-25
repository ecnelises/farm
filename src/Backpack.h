#ifndef FARM_BACKPACK_H
#define FARM_BACKPACK_H

#include "vector"
#include "BackpackEntry.h"

class Backpack : public BackpackEntry {
public:
    std::vector<BackpackEntry*> backpack;

    void show();
    void push_back(BackpackEntry* backpackEntry);
    bool remove();
};

#endif //FARM_BACKPACK_H
