#ifndef FOODCROPMATURE_H
#define FOODCROPMATURE_H

#include "FoodCrop.h"

class FoodCropMATURE : public FoodCrop(){
public:
    void creat(void){
        externedCrop->creat();
        foodMatured(externedCrop);
    }
private:
    void foodMatured(Crop* externedCrop){
        cout<<"FoodCrop:"<<externedCrop->getName()<<":foodMatured:"<<"My food is mature.";
    }
}

#endif