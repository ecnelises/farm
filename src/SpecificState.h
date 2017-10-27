#ifndef SPECIFICSTATE_H
#define SPECIFICSTATE_H

#include "State.h"
#include "Scene.h"

class SleepState : public State{
public:
	virtual void Operate(Player* player) {
		std::cout << "Sleep State"<<std::endl;
		player->sleep();
	}
};

class MoveState : public State {
public:
	MoveState(Scene* scene):m_scene(scene){}
	virtual void Operate(Player* player) {
		std::cout << "Move State" << std::endl;
		player->move(*m_scene);
	}
private:
	Scene* m_scene;
};

class EatState : public State {
public:
	EatState(Food* food):m_food(food){}
	virtual void Operate(Player* player) {
		std::cout << "Eat State" << std::endl;
		player->eat(*m_food);
	};
private:
	Food* m_food;
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
