#include "Backpack.h"
#include "iostream"

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

void Backpack::push_back(BackpackEntry* backpackEntry) {
    backpack.push_back(backpackEntry);
}

bool Backpack::remove(int index) {
    if (index < 0 || index >= backpack.size()) {
        std::cout << "invalid index in Backpack::remove()";
        return false;
    }
    backpack.erase(backpack.begin() + index);
    return true;
}

BackpackIterator Backpack::begin() {
    return backpack.begin();
}

BackpackIterator Backpack::end() {
    return backpack.end();
}
