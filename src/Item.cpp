//modify by nature
#include "Item.h"
#include <iostream>
#include <string>

Item::Item(std::string n, std::string des){
	name = n;
	description = des;
}

std::string Item::getName() {
	return name;
}

std::string Item::getDes() {
	return description;
}



