#include "Backpack.h"
#include "Item.h"
#include <iostream>

Backpack::~Backpack() {
    for (auto i : backpack) {
        delete i;
    }
}

// void Backpack::show() {
//     std::cout << getName() << "  ";
//     for (int i = 0 ; i < backpack.size() ; i++) {
//         std::cout << i << ':';
//         backpack[i]->show();
//     }
// }

const char* Backpack::name() const {
    return "Backpack";
}

void Backpack::add(BackpackEntry* entry) {
    std::cout << "class:Backpack method:add\n";
    backpack.push_back(entry);
}

bool Backpack::remove(int index) {
    std::cout << "class:Backpack method:remove\n";
    if (index <= 0 || index > backpack.size()) {
        return false;
    }
    backpack.erase(backpack.begin() + index - 1);
    return true;
}

BackpackIterator Backpack::begin() {
    return backpack.begin();
}

BackpackIterator Backpack::end() {
    return backpack.end();
}
