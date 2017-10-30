#ifndef FARM_ANIMALHANDLER_H
#define FARM_ANIMALHANDLER_H

#include "string"
#include "vector"

class AnimalHandler {
public:
    virtual ~AnimalHandler() = default;

    virtual void handleRequest(std::string name) = 0;
    virtual void setNextRequest(AnimalHandler* handler) = 0;
protected:
    AnimalHandler* myHandler;
    std::vector<std::string> nameList;
};


#endif //FARM_ANIMAL_HANDLER_H
