//
// Farm.h
// 农场类，农场是栽培作物的地方
//
#ifndef FARM_H
#define FARM_H

#include "Animal.h"
#include "Scene.h"
#include <list>

class Farm : public Scene {
public:
    Animal* pick(void);
private:
    std::list<Animal*> animals;
};

#endif // FARM_H
