#ifndef  FRUIT_H
#define  FRUIT_H

#include "Item.h"
#include <string>

class Fruit : public Item{
public:
	void show();
	std::string recover();
};

#endif // ! FRUIT_H
