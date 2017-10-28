#ifndef  FRUIT_H
#define  FRUIT_H

#include "Item.h"
#include <string>

class Fruit : public Item{
public:
	Fruit(std::string n, std::string des):Item(n,des){}
	void show();
	std::string recover();
};

#endif // ! FRUIT_H
