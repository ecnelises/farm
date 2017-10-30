#ifndef FARM_FLYWEIGHT_H
#define FARM_FLYWEIGHT_H

#include <iostream>
#include <string>

template<typename T>
class FlyWeight {
public:
    FlyWeight(T *val);

    FlyWeight(const FlyWeight &fw);

    FlyWeight(FlyWeight &&fw);

    ~FlyWeight();

private:
    unsigned *refcnt;
    T *entity;
};

#endif //FARM_FLYWEIGHT_H
