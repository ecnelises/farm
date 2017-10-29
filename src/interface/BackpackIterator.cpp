#include "BackpackIterator.h"
#include <vector>
#include <iterator>

BackpackIterator BackpackIterator::operator ++ (void) {
    ++backpackIterator;
    return *this;
}

BackpackIterator BackpackIterator::operator ++ (int) {
    return BackpackIterator(backpackIterator++);
}

BackpackEntry* BackpackIterator::operator * (void) {
    return *backpackIterator;
}

bool BackpackIterator::operator == (const BackpackIterator& bi) {
    return backpackIterator == bi.backpackIterator;
}

bool BackpackIterator::operator != (const BackpackIterator& bi) {
    return backpackIterator != bi.backpackIterator;
}
