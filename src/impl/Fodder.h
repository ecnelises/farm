#ifndef FODDER_H
#define FODDER_H

#include <string>

class Fodder
{
public:
	void setIngredientA(std::string A);
	void setIngredientB(std::string B);
private:
	std::string _ingredientA;
	std::string _ingredientB;
};

#endif // !FODDER_H