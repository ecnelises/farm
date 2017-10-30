#ifndef FARM_FLYWEIGHT_H
#define FARM_FLYWEIGHT_H

#include <iostream>
#include <string>

template<typename T>
class FlyWeight {
public:
    FlyWeight(T *val) {
        entity = val;
        refcnt = new unsigned(1);
    }

    FlyWeight(const FlyWeight &fw) {
        entity = fw.entity;
        refcnt = fw.refcnt;
        ++(*refcnt);
    }

    FlyWeight(FlyWeight &&fw) {
        entity = fw.entity;
        refcnt = fw.refcnt;
        fw.entity = nullptr;
        fw.refcnt = nullptr;
    }

    ~FlyWeight() {
        if (--(*refcnt) == 0) {
            delete entity;
            delete refcnt;
        }
    }

private:
    unsigned *refcnt;
    T *entity;
};

#endif //FARM_FLYWEIGHT_H
