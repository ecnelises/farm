#include "Backpack.h"
#include "iostream"

void Backpack::show() {
    std::cout << "backpack";
    for (auto i : backpack) {
        i->show();
    }
}

void Backpack::push_back(BackpackEntry* backpackEntry) {
    backpack.push_back(backpackEntry);
}

// the same question: how to pass "type" to be removed?
bool Backpack::remove() {
    return false;
}

