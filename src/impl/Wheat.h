#ifndef WHEAT_H
#define WHEAT_H

#include <string>
#include "Crop.h"
#include "Food.h"

class Wheat : public Crop{
public:
	virtual ~Wheat() = default;
    //Status getStatus(void) const;
    void creat(void) {
        cout<<"Crop:Wheat:Creat:I'm created";
    }
    std::string getName(void) const{
        return name;
    }

	Item* pick(){
		Food* it = Food(productName, productDes, nutrient);
		return it;
	}
private:
    Status status;
    std::string name;
	const std::string productName = "wheatFlour";
	const std::string productDes = "Item[Wheat Flour] Produced with Wheat";
	const int nutrient = 10;
}

#endif