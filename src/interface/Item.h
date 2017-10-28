//modify by nature
#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item{
public:
	Item(std::string n, std::string des);
    virtual void show() = 0; 
	std::string getName() const;
	std::string getDes() const;
private:
	std::string name;
	std::string description;
	
};

#endif
