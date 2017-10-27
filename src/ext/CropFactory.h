#ifndef CROPFACTORY_H
#define CROPFACTORY_H

#include <string>

class Crop;

class CropFactory{
public:
    Crop* creatCrop(std::string cropName);
};

#endif