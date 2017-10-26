#ifndef POTATO_H
#define POTATO_H

#include "Crop.h"

class Potato{
public:
    virtual ~Potato();
    Status getStatus(void) const;
    void creat(void){
        cout << "Crop:Potato:Creat:I'm created";
    }
private:
    Status status;
}

#endif