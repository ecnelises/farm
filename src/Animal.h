#ifndef ANIMAL_H
#define ANIMAL_H

#include <memory>
#include "Food.h"

class Animal {
public:
	Animal(int killstrength):killAnimal(killstrength){}
    virtual ~Animal() = 0;
    virtual Animal* clone(void) const = 0;
	virtual Food* produce() = 0;
	virtual int getKillStrength() { return killAnimal; }
private:
	int killAnimal;
};

#endif
