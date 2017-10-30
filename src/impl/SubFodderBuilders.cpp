#include "SubFodderBuilders.h"

SubFodderBuilderA::SubFodderBuilderA() {
	_fodder = new Fodder();
}

void SubFodderBuilderA::addIngredientA() {
	// add something
	_fodder->setIngredientA("AA");
};

void SubFodderBuilderA::addIngredientB() {
	// add something
	_fodder->setIngredientB("AB");
};

Fodder* SubFodderBuilderA::getFodder() {
	return _fodder;
}

SubFodderBuilderB::SubFodderBuilderB() {
	_fodder = new Fodder();
}

void SubFodderBuilderB::addIngredientA() {
	// add something
	_fodder->setIngredientA("BA");
};

void SubFodderBuilderB::addIngredientB() {
	// add something
	_fodder->setIngredientB("BB");
};

Fodder* SubFodderBuilderB::getFodder() {
	return _fodder;
}