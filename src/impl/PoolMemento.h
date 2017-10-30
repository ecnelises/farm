//
// Created by Nature on 2017/10/30. 备忘录模式
//

#ifndef FARM_POOLMEMENTO_H
#define FARM_POOLMEMENTO_H

#include "Pool.h"
#include "Animal.h"
#include <string>
#include <list>

class PoolMemento{
public:
    PoolMemento(std::string _name, std::list<Animal *> _animals): name(_name),animals(_animals){}

private:
    std::string name;
    std::list<Animal *>animals;
};

#endif //FARM_POOLMEMENTO_H
