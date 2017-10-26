#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Farm.h"
#include "Backpack.h"
#include "BackpackEntry.h"
#include "State.h"

class Scene;
class Food;

//enum StateType {
//	SLEEP, MOVE, EAT, HUNT, GETPACK
//};

class Player {
public:
    Player(double px = 0.0, double py = 0.0, int strength = 100);
    ~Player();
	void SetState(State* state);
	//StateType GetState();
    bool move(const Scene& place);
    void eat(const Food& food);
	void sleep();
    bool hunt(const Farm& farm, std::string type);
    void getpack(BackpackEntry* backpackEntry);
private:
    int strength;
	int liveday;
    double x;
    double y;
    Backpack backpack;
	State *m_state;
	//StateType state;
};

#endif
