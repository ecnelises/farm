#ifndef TOMATO_H
#define TOMATO_H

#include <iostream>
#include <string>
#include "Crop.h"

class Tomato: public Crop{
public:
    virtual ~Tomato();
    //Status getStatus(void) const;
    void creat(void){
        std::cout << "Crop:Tomato:Creat:I'm created"<<std::endl;
    }
	void TomatoMate() {
		std::cout << "Tomato mate with tomato" << std::endl;
    }
    std::string getName(void) const{
        return name;
    }
	//Override virtual Item* pick()
	Item* pick()
	{
		Fruit* it = new Fruit(this->productName,this->productDescription);
		return it;
	}
private:
    //Status status;
    std::string name;
	std::string productName = "Tomato";
	std::string productDescription = "Item:Fruit:tomato produced by this Tomato";

};

#endif