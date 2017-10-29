#include "Player.h"
#include "Scene.h"
#include "Food.h"
#include "Farm.h"
#include "PlayerController.h"
#include <cmath>
#include <iostream>
// #include "SpecificState.h"

Player::~Player() {
	delete controller;
}

bool Player::move(const Scene& scene)
{
	// SetState(new MoveState());
	// m_state->Operate(this);
    /*int d = std::floor(Scene::distance(scene.getX(), scene.getY(), x, y));
    if (strength < d) {
        std::cout << "Move failed.\n";
        return false;
    } else {
        strength -= d;
        x = scene.getX();
        y = scene.getY();
        std::cout << "Moved to scene " << scene.getName() << ".\n";
        std::cout << "Current strength: " << strength << ".\n";
        return true;
    }*/
    return false;
}

void Player::eat(const Food& food)
{
	// SetState(new EatState());
	// m_state->Operate(this);
    /*strength += food.consume();
    strength = std::min(strength, 100);*/
}

void Player::sleep() {
	// SetState(new SleepState());
	// m_state->Operate(this);
}

// ! question:how does user pass the TYPE of Animal to be killed?
bool Player::hunt(const Farm& farm, std::string type)
{
	// SetState(new HuntState());
	// m_state->Operate(this);
//    auto animal = farm.pick(); // don't know how to solve this bug(
//    auto food = animal->produce();
//    backpack.push_back(food);
//    farm.remove(animal);
//    delete animal;

//    strength -= strengthOfKillAnimal;
    return true;
}

void Player::getpack(BackpackEntry* backpackEntry)
{
	// SetState(new GetPackState());
	// m_state->Operate(this);
    //backpack.push_back(backpackEntry);
}

void Player::UseItem(Item* item) {
	item->getUsedby(this);
}
