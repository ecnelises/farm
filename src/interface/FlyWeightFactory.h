#ifndef FARM_FLYWEIGHTFACTORY_H
#define FARM_FLYWEIGHTFACTORY_H

#include <map>
#include <string>
#include "FlyWeight.h"

template<typename myType>
class FlyWeightFactory {
public:
    FlyWeight<myType> *getFlyWeight(std::string str, myType var) {
        using MapIterator = typename std::map<std::string,FlyWeight<myType>>::iterator;
        MapIterator itr;
        itr = hashMap.find(str);
        if (itr == hashMap.end()) {
            FlyWeight<myType> *fw = new myType();
            std::cout<<"Flyweight:getFlyWeight():Created new flyweight\n";
            return fw;
        }
        else{
            std::cout<<"Flyweight:getFlyWeight():Returned an existing flyweight\n";
            return &itr->second;
        }
    }

private:
    std::map<std::string, FlyWeight<myType>> hashMap;
};

#endif //FARM_FLYWEIGHTFACTORY_H
