#include "Bread.h"
#include <iostream>

const char* Bread::name(void) const {
    return "Bread";
}

void Bread::usedBy(Player* player) {
    std::cout << "class:Bread method:usedBy\n";
}
