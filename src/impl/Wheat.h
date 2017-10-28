#ifndef WHEAT_H
#define WHEAT_H

#include <string>
#include "Crop.h"

class Wheat : public Crop{
public:
    virtual ~Wheat();
    Status getStatus(void) const;
    void creat(void) {
        cout<<"Crop:Wheat:Creat:I'm created";
    }
    std::string getName(void) const{
        return name;
    }
private:
    Status status;
    std::string name;
}

#endif