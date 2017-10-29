#include "Mutton.h"
#include <iostream>

const char* Mutton::name(void) const {
    return "Mutton";
}

void Mutton::usedBy(Player* player) {
    std::cout << "class:Mutton method:usedBy\n";
}
