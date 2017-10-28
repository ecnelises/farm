#include "Fruit.h"
#include <iostream>

void Fruit::show()
{
	std::cout << this->getDes() << std::endl;
	std::cout << "It is a Fruit" << std::endl;
}
std::string Fruit::recover()
{
	std::cout << "Player eats " << this->getName << " for hungry!" << std::endl;
}