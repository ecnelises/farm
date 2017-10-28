//modify by nature
#include "Item.h"
#include <iostream>
#include <string>

Item::Item(std::string n, std::string des){
	name = n;
	description = des;
}

virtual void Item::show() {
	std::cout << getName() << "  ";
}


std::string Item::getName() {
	return name;
}

std::string Item::getDes() {
	return description;
}



