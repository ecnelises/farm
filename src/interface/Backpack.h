#ifndef BACKPACK_H
#define BACKPACK_H

#include "BackpackEntry.h"
#include "BackpackIterator.h"
#include <vector>
#include <string>

class Backpack : public BackpackEntry {
public:
    Backpack() = default;
    Backpack(const Backpack&) = delete;
    Backpack& operator = (const Backpack&) = delete;
    virtual ~Backpack();
    void add(BackpackEntry* entry);
    virtual const char* name() const;
    bool remove(int index);
    BackpackIterator begin();
    BackpackIterator end();
private:
    std::vector<BackpackEntry*> backpack;
};

#endif // BACKPACK_H
