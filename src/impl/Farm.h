//
// Farm.h
// 农场类，农场是栽培作物的地方
//
#ifndef FARM_H
#define FARM_H

#include "Scene.h"
#include "Decorator.h"
#include <list>

class Farm : public Scene {
public:
    Farm(Decorator* dec = new Decorator) : Scene("Farm", dec) {}
    virtual ~Farm();
    virtual const char* typeName(void) const;
    virtual Entity* spawn(void);
};

#endif // FARM_H
