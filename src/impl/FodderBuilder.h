#ifndef FODDER_BUILDER_H
#define FODDER_BUILDER_H

#include <string>
#include "Fodder.h"

class FodderBuilder
{
public:
	virtual void addIngredientA() {};
	virtual void addIngredientB() {};
	virtual Fodder* getFodder() { return nullptr; };
};

#endif // !FODDER_BUILDER_H