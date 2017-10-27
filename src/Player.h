#ifndef PLAYER_H
#define PLAYER_H

#include "Point.h"
#include <string>
#include "Farm.h"
#include "Backpack.h"
#include "BackpackEntry.h"
#include "State.h"
#include "Food.h"

class Scene;
class PlayerController;

enum StateType {
	SLEEP, MOVE, EAT, HUNT, GETPACK
};

class Player {
public:
	Player(Scene* scene, PlayerController* ctrl);
    virtual ~Player() = default;
    bool move(Scene& place);
    bool hunt(const Farm& farm, std::string type);
    void eat(const Food& food);
	void sleep();
    void getpack(BackpackEntry* backpackEntry);
	void Operate(StateType states, Scene* scene, Food* food);
	void SetState(State *state);
	Scene* getCurrentScene();
private:
    int strength;
    Scene *m_scene;
    PlayerController* controller;
    Backpack backpack;
	State *m_state;
	int liveday;
};

#endif
