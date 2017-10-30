#ifndef SUB_FODDER_BUILDERS
#define SUB_FODDER_BUILDERS

#include "Fodder.h"
#include "FodderBuilder.h"

class SubFodderBuilderA : public FodderBuilder
{
public:
	SubFodderBuilderA();
	void addIngredientA();
	void addIngredientB();
	Fodder* getFodder();
private:
	Fodder* _fodder;
};

class SubFodderBuilderB : public FodderBuilder
{
public:
	SubFodderBuilderB();
	void addIngredientA();
	void addIngredientB();
	Fodder* getFodder();
private:
	Fodder* _fodder;
};

#endif // !SUB_FODDER_BUILDERS