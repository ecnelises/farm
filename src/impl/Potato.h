#ifndef POTATO_H
#define POTATO_H

#include <iostream>
#include "Crop.h"
#include "Fruit.h"

class Potato: public Crop{
public:
	virtual ~Potato() = default;
    //Status getStatus(void) const;
    void creat(void){
        std::cout << "Crop:Potato:Creat:I'm created"<<std::endl;
    }
	void PotatoMate() {
		std::cout << "Potato mate with potato" << std::endl;
    }
    std::string getName(void) const{
        return name;
    }
	Item* pick()
	{
		Fruit* it = new Fruit(this->productName,this->productDes);
		return it;
	}
private:
    //Status status;
    std::string name;
	std::string productName = "potato";
	std::string productDes = "Item:Fruit:potato Produced by Potato";
	int nutrient = 10;
};

#endif