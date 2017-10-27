#ifndef MATEADAPTER_H
#define MATEADAPTER_H

#include <iostream>
#include "Potato.h"
#include "Tomato.h"
#include "PTatoto.h"

class PtoTMateAdapter : public Tomato, private PTatoto {
public:
	PTatoto* PtoTMate() {
		std::cout << "Potato seed to tomato seed" << std::endl;
		this->TomatoMate();
		return new PTatoto();
	}
};

class TtoPMateAdapter : public Potato, private PTatoto {
public:
	PTatoto* TtoPMate() {
		std::cout << "Tomato seed to potato seed" << std::endl;
		this->PotatoMate();
		return new PTatoto();
	}
};
#endif