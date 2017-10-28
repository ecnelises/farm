#ifndef FOODCROP_H
#define FOODCROP_H

#include "Crop.h"

class FoodCrop : public Crop{
public:
    FoodCrop(Crop* aCrop){
        this.externedCrop = aCrop;
    }
    void creat(void){
        externedCrop->creat();
    }

protected:
    Crop* externedCrop;
}

#endif