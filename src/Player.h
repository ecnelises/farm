#ifndef PLAYER_H
#define PLAYER_H

#include "Point.h"
#include <string>
#include "Farm.h"
#include "Backpack.h"
#include "BackpackEntry.h"
#include "State.h"

class Scene;
class PlayerController;

//enum StateType {
//	SLEEP, MOVE, EAT, HUNT, GETPACK
//};

class Player {
public:
    Player(Point<double> cord, PlayerController* ctrl) :
        strength(100), coordinate(cord), controller(ctrl) {}
    virtual ~Player() = default;
    bool move(const Scene& place);
    bool hunt(const Farm& farm, std::string type);
    void eat(const Food& food);
	void sleep();
    void getpack(BackpackEntry* backpackEntry);
private:
    int strength;
    Point<double> coordinate;
    PlayerController* controller;
    Backpack backpack;
	State *m_state;
	int liveday;
};

#endif
