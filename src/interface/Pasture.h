//
// Pasture.h
// 牧场类，牧场是生产动物的地方
//
#ifndef PASTURE_H
#define PASTURE_H

#include "Scene.h"

class Pasture : public Scene {
public:
    Pasture(Decorator* dec = new Decorator) : Scene("Farm", dec) {}
    virtual ~Pasture();
    virtual const char* typeName(void) const;
    virtual Entity* spawn(void);
};

#endif // PASTURE_H
