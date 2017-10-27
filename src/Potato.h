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
private:
    Status status;
};

#endif