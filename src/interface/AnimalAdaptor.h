#ifndef FARM_ANIMALADAPTOR_H
#define FARM_ANIMALADAPTOR_H

#include "Animal.h"

class AnimalAdaptor {
public:
    // 根据字符串内容，适配不同的类型。
    virtual Animal* adapt(string type);
};

#endif //FARM_ANIMALADAPTOR_H
