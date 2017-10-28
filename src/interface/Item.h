//modify by nature
#ifndef ITEM_H
#define ITEM_H

#include <string>
#include "BackpackEntry.h"

class Item : public BackpackEntry {
public:
	Item(std::string n, std::string des);
    virtual void show();
	std::string getName();
	std::string getDes();
private:
	std::string name;
	std::string description;
};

#endif
