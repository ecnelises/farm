#include "Player.h"
#include "Scene.h"
#include "Food.h"
#include "Farm.h"
#include <cmath>
#include <iostream>
#include "SpecificState.h"
#include <algorithm>


Player::Player(Scene *scene, PlayerController* ctrl) : strength(100), controller(ctrl)
{
	m_scene = scene;
	liveday = 1;
	m_state = NULL;
}

Player::~Player() {
	delete m_state;
}

void Player::SetState(State* state) {
	delete m_state;
	m_state = state;
}

void Player::Operate(StateType states, Scene* scene = NULL, Food* food = NULL) {
	if (states == SLEEP) {
		SetState(new SleepState());
		m_state->Operate(this);
	}
	else if (states == MOVE) {
		SetState(new MoveState(scene));
		m_state->Operate(this);
	}
	else if (states == EAT) {
		SetState(new EatState(food));
		m_state->Operate(this);
	}
	//完善打猎和开包方法后再修改以下的两个状态
	else if (states == HUNT) {
		SetState(new HuntState());
		m_state->Operate(this);
	}
	else if (states == GETPACK) {
		SetState(new GetPackState());
		m_state->Operate(this);
	}
}

Scene* Player::getCurrentScene() {
	return m_scene;
}

void Player::sleep() {
	liveday++;
	strength = 100;
}

bool Player::move(Scene& scene)
{
    int d = m_scene->distance(scene.getCoordinate());
    if (strength < d) {
        std::cout << "Move failed.\n";
        return false;
    } 
	else {
        strength -= d;
		m_scene = &scene;
        std::cout << "Moved to scene " << scene.getName() << ".\n";
        std::cout << "Current strength: " << strength << ".\n";
        return true;
    }
}

void Player::eat(const Food& food)
{
    strength += food.consume();
    strength = std::min(strength, 100);
}

// ! question:how does user pass the TYPE of Animal to be killed?
bool Player::hunt(const Farm& farm, std::string type)
{
    auto animal = farm.pick(); // don't know how to solve this bug(
    auto food = animal->produce();
    backpack.push_back(food);
    farm.remove(animal);
    delete animal;

    strength -= animal->getKillStrength();
}

void Player::getpack(BackpackEntry* backpackEntry)
{
    backpack.push_back(backpackEntry);
}
