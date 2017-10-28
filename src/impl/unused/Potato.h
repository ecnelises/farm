#ifndef POTATO_H
#define POTATO_H

#include <iostream>
#include "Crop.h"

class Potato: public Crop{
public:
    virtual ~Potato();
    Status getStatus(void) const;
    void creat(void){
        std::cout << "Crop:Potato:Creat:I'm created"<<std::endl;
    }
	void PotatoMate() {
		std::cout << "Potato mate with potato" << std::endl;
    }
    std::string getName(void) const{
        return name;
    }
private:
    Status status;
    std::string name;
};

#endif