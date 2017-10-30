#ifndef FARM_INSECT_H
#define FARM_INSECT_H


#include "AnimalHandler.h"

class InsectHandler : public AnimalHandler{
public:
    InsectHandler();

    virtual void handleRequest(std::string name);
    virtual void setNextRequest(AnimalHandler* handler) = 0;
};


#endif //FARM_INSECT_H
