#ifndef SPECIFICSTATE_H
#define SPECIFICSTATE_H

#include"State.h"

class SleepState : public State{
public:
	virtual void Operate(Player* player) {
		std::cout << "Sleep State"<<std::endl;
	};
};

class MoveState : public State {
public:
	virtual void Operate(Player* player) {
		std::cout << "Move State" << std::endl;
	};
};

class EatState : public State {
public:
	virtual void Operate(Player* player) {
		std::cout << "Eat State" << std::endl;
	};
};

class HuntState : public State {
public:
	virtual void Operate(Player* player) {
		std::cout << "Hunt State" << std::endl;
	};
};

class GetPackState : public State {
public:
	virtual void Operate(Player* player) {
		std::cout << "Get Pack State" << std::endl;
	};
};

class HangOutState : public State {
public:
	virtual void Operate(Player* player) {
		std::cout << "Hang Out State" << std::endl;
	};
};

#endif
