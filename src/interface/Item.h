//modify by nature
#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item{
public:
	Item(std::string n, std::string des);
    virtual void show() = 0;
	std::string getName();
	std::string getDes();
private:
	std::string name;
	std::string description;
};

#endif
