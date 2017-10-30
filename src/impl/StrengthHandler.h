#ifndef STRENGTHHANDLER_H
#define STRENGTHHANDLER_H

#include "Handler.h"
#include <iostream>

class HighStrengthHandler : public Handler {
public:
	HighStrengthHandler(Handler* handler):Handler(handler){}
	void dealWith(int prio) {
		if (prio >= 20) {
			std::cout << "Strength is enougth, you can move to another scene";
		}
		else {
			m_handler->dealWith(prio);
		}
	}
};

class LowStrengthHandler : public Handler {
public:
	LowStrengthHandler(Handler* handler):Handler(handler) {}
	void dealWith(int prio) {
		std::cout << "Strength is enougth, you can move to another scene";
	}
};

#endif