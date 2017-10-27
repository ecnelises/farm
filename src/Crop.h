#ifndef CROP_H
#define CROP_H

#include <memory>

//作物类
class Crop{
public:
    enum Status{
        germ,
        seedling,
        mature,
        fruit
    }; 
    virtual ~Crop() = 0;
    virtual void creat(void) = 0;
};

#endif