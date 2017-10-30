#ifndef PREPARE_FODDER_H
#define PREPARE_FODDER_H

#include "FodderBuilder.h"

class PrepareFodder
{
public:
	PrepareFodder(FodderBuilder* fodderBuilder);
	void prepare();
	Fodder* getFodder();
private:
	FodderBuilder* _fodderBuilder;
};

#endif
