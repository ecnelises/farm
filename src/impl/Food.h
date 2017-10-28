#ifndef FOOD_H
#define FOOD_H

#include "Item.h"
#include <string>

class Food : public Item {
public:
	Food(std::string n, std::string des, int nutrient);
	virtual ~Food() = default;
    virtual int consume() const = 0;
    virtual const char* name() const = 0;
	
private:
	int nutrient;
	
};

#endif
