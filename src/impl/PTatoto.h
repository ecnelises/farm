#ifndef PTATOTO_H
#define PTATOTO_H

#include <iostream>
#include "Crop.h"

class PTatoto : public Crop {
public:
	virtual ~PTatoto();
	Status getStatus(void) const;
	virtual PTatoto* PtoTMate();
	virtual PTatoto* TtoPMate();
	void creat(void) {
		std::cout << "Can not have a next generation!" << std::endl;
	}
private:
	Status status;
};

#endif
