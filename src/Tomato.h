#ifndef TOMATO_H
#define TOMATO_H

#include <iostream>
#include "Crop.h"

class Tomato: public Crop{
public:
    virtual ~Tomato();
    Status getStatus(void) const;
    void creat(void){
        std::cout << "Crop:Tomato:Creat:I'm created"<<std::endl;
    }
	void TomatoMate() {
		std::cout << "Tomato mate with tomato" << std::endl;
	}
private:
    Status status;
};

#endif