#ifndef TOMATO_H
#define TOMATO_H

#include <iostream>
#include <string>
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
    std::string getName(void) const{
        return name;
    }
private:
    Status status;
    std::string name;
};

#endif