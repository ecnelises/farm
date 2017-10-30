//
// Created by imban on 2017/10/30.
//

#ifndef FARM_MAMMAL_HANDLER_H
#define FARM_MAMMAL_HANDLER_H

#include "AnimalHandler.h"

class MammalHandler : public AnimalHandler{
public:
    MammalHandler();

    virtual void handleRequest(std::string name);
    virtual void setNextRequest(AnimalHandler* handler) = 0;
};


#endif //FARM_MAMMAL_HANDLER_H
