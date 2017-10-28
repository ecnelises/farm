#include "Food.h"


 int Food::consume() const
{
	return nutrient;
}

 const char* Food::name() const
 {
	 return this->getName().data();
 }

 Food::Food(std::string n, std::string des, int nutr) :Item(n,des)
 {
	 nutrient = nutr;
 }
 