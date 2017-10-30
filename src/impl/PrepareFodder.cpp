#include "PrepareFodder.h"

//usage:
//FodderBuilder* fba = new SubFodderBuilderA();
//PrepareFodder* pf = new PrepareFodder(fba);
//Fodder* f = pf->getFodder();

PrepareFodder::PrepareFodder(FodderBuilder* fodderBuilder)
	: _fodderBuilder(fodderBuilder){
}

void PrepareFodder::prepare() {
	_fodderBuilder->addIngredientA();
	_fodderBuilder->addIngredientB();
}

Fodder* PrepareFodder::getFodder() {
	prepare();
	return _fodderBuilder->getFodder();
}
