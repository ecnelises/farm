//农作物工厂类，实现工厂模式
#ifndef CROPFACTORY_H
#define CROPFACTORY_H

#include <string>

class CropFactory{
public:
    Crop creatCrop(std::string cropName);
}