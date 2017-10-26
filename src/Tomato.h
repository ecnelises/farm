#ifndef TOMATO_H
#define TOMATO_H

#include "Crop.h"

class Tomato{
public:
    virtual ~Tomato();
    Status getStatus(void) const;
    void creat(void){
        cout << "Crop:Tomato:Creat:I'm created";
    }
private:
    Status status;
}

#endif