#ifndef FARM_ANIMALADAPTOR_H
#define FARM_ANIMALADAPTOR_H

#include "Animal.h"
#include <string>

class AnimalAdaptor {
public:
    // 根据字符串内容，适配不同的类型。
    virtual Animal* adapt(const std::string& type);
};

#endif //FARM_ANIMALADAPTOR_H
