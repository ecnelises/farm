#ifndef BACKPACK_H
#define BACKPACK_H

#include "vector"
#include "BackpackEntry.h"
#include "string"

class Backpack : public BackpackEntry {
public:
    virtual ~Backpack();

    void show() override;
    std::string getName();
    void push_back(BackpackEntry* backpackEntry);
    bool remove(int index);
    std::vector<BackpackEntry*>::iterator begin();
    std::vector<BackpackEntry*>::iterator end();

private:
    std::vector<BackpackEntry*> backpack;
    std::string name;
};

#endif // BACKPACK_H
