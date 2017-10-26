#ifndef WHEAT_H
#define WHEAT_H

#include "Crop.h"

class Wheat : public Crop{
public:
    virtual ~Wheat();
    Status getStatus(void) const;
    void creat(void) {
        cout<<"Crop:Wheat:Creat:I'm created";
    }
private:
    Status status;
}

#endif