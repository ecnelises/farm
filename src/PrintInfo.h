#ifndef PRINT_INFO_H
#define PRINT_INFO_H

#include "PrintInfoStrategy.h"

class PrintInfo
{
public:
	PrintInfo(PrintInfoStrategy* strategy);
	void printInfo();
private:
	PrintInfoStrategy* _printInfoStrategy;
};

#endif
