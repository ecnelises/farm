#ifndef BACKPACK_ENTRY_H
#define BACKPACK_ENTRY_H

#include <iostream>

class BackpackEntry {
public:
    virtual ~BackpackEntry() = default;
    virtual const char* name(void) const = 0;
};

#endif // FARM_BACKPACK_ENTRY_H
