#include "Farm.h"
#include "Wheat.h"
#include <iostream>

Farm::~Farm() {
}

const char* Farm::typeName(void) const {
    return "Farm";
}

Entity* Farm::spawn(void) {
    std::cout << "class:Farm method:spawn\n";
    return new Wheat;
}
