#ifndef FARM_H
#define FARM_H

#include "Animal.h"
#include <list>

class Farm : public Scene {
public:
    Animal* pick(void);
private:
    std::list<Animal*> animals;
};

#endif
