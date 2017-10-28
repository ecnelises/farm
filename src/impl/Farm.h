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
    virtual ~Farm() = default;

    virtual Entity* spawn(void);
private:
    // 由用户实现的工厂方法，根据用户自定义的各种生物，返回不同生物。
    virtual Animal* createAnimal() = 0;
};

#endif // FARM_H
