#ifndef PRINT_INFO_STRATEGIES_H
#define PRINT_INFO_STRATEGIES_H

#include "PrintInfoStrategy.h"

class FirstStrategy:public PrintInfoStrategy
{
public:
	virtual void printInfo();
};

class SecondStrategy:public PrintInfoStrategy
{
public:
	virtual void printInfo();
};


#endif
