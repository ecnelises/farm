#include "Pasture.h"
#include "Sheep.h"
#include <iostream>

Pasture::~Pasture() {
}

const char* Pasture::typeName(void) const {
    return "Pasture";
}

Entity* Pasture::spawn(void) {
    std::cout << "class:Pasture method:spawn\n";
    return new Sheep;
}
