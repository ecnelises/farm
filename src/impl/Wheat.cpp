#include "Wheat.h"
#include "Item.h"
#include "Bread.h"
#include <iostream>

Item* Wheat::pick(void) {
    std::cout << "class:Wheat method:pick\n";
    return new Bread;
}

const char* Wheat::typeName(void) const {
    return "Wheat";
}
