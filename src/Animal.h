#ifndef ANIMAL_H
#define ANIMAL_H

#include <memory>

class Animal {
public:
    virtual ~Animal() = 0;
    virtual Animal* clone(void) const = 0;
};

#endif
