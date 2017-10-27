#include "CropFactory.h"
#include "Wheat.h"
#include "Tomato.h"
#include "Potato.h"


class Crop;

Crop* CropFactory::creatCrop(std::string cropName){
    if (cropName.length() == 0){
        return NULL;
    }
    if (cropName == "Wheat"){
        return new Wheat();
    }
    else if (cropName == "Tomato"){
        return new Tomato();
    }
    else if (cropName == "Potato"){
        return new Potato();
    }
    return NULL;
}
