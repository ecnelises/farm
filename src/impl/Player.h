#ifndef PLAYER_H
#define PLAYER_H

#include "Point.h"
#include "Farm.h"
#include "Backpack.h"
#include "BackpackEntry.h"
#include "State.h"
#include "Item.h"
#include <string>

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
    void use(Item* item);
	void sleep();
    void outputItems(void);
	void SetState(State *state);
    void acquire(Item* entry) {
        backpack.add(entry);
    }
    void setController(PlayerController* ctrl) {
        controller = ctrl;
    }
    Backpack& getBackpack() {
        return backpack;
    }
private:
    int strength;
    PlayerController* controller;
    Backpack backpack;
	State *m_state;
	int liveday;
};

#endif
