#include "PrintInfo.h"

PrintInfo::PrintInfo(PrintInfoStrategy* strategy)
	: _printInfoStrategy(strategy){

}

void PrintInfo::printInfo() {
	_printInfoStrategy->printInfo();
}
