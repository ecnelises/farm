#ifndef PLAYER_H
#define PLAYER_H

#include "Point.h"
#include <string>
#include "Farm.h"
#include "Backpack.h"
#include "BackpackEntry.h"
#include "State.h"
#include "Item.h"

class Scene;
class PlayerController;
class Food;

class Player {
public:
    Player() : strength(100), controller(nullptr) {}
    virtual ~Player();
    bool move(const Scene& place);
    bool hunt(const Farm& farm, std::string type);
    void eat(const Food& food);
	void sleep();
	// void SetState(State *state);
    void getpack(BackpackEntry* backpackEntry);
    void setController(PlayerController* ctrl) {
        controller = ctrl;
    }
	void UseItem(Item* item);
private:
    int strength;
    PlayerController* controller;
    Backpack backpack;
	// State *m_state;
	int liveday;
};

#endif
