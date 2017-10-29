#include "Wheat.h"
#include "Item.h"
#include "Bread.h"

Item* Wheat::pick(void) {
    return new Bread;
}

const char* Wheat::typeName(void) const {
    return "Wheat";
}
