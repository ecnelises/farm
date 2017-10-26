#include "CropFactory.h"

CropFactory::creatCrop(std::string cropName){
    if (cropName == null){
        return null;
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
    return null;
}
