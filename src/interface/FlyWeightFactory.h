#ifndef FARM_FLYWEIGHTFACTORY_H
#define FARM_FLYWEIGHTFACTORY_H

#include <map>
#include <string>
#include "FlyWeight.h"

template<typename myType>
class FlyWeightFactory {
public:
    FlyWeight<myType> *getFlyWeight(std::string str, myType var);

private:
    std::map<std::string, FlyWeight<myType>> hashMap;
};

#endif //FARM_FLYWEIGHTFACTORY_H
