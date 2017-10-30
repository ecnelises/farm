//
// Created by nature on 2017/10/30. Log 类用于中介者模式
//

#ifndef FARM_LOG_H
#define FARM_LOG_H

#include "Scene.h"
#include <string>
#include <iostream>

class Log{
public:
    ~Log() = default;
    static void Show(Scene* scene,std::string message){
        std::cout<<message<<std::endl;
    }
};

#endif //FARM_LOG_H
