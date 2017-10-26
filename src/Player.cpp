#include "Player.h"
#include "Scene.h"
#include "Food.h"
#include "Farm.h"
#include <cmath>
#include <iostream>

bool Player::move(const Scene& scene)
{
    int d = std::floor(Scene::distance(scene.getX(), scene.getY(), x, y));
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
    }
}

void Player::eat(const Food& food)
{
    strength += food.consume();
    strength = std::min(strength, 100);
}

// ! question:how does user pass the TYPE of Animal to be killed?
bool Player::kill(const Farm& farm, std::string type)
{
//    auto animal = farm.pick(); // don't know how to solve this bug(
//    auto food = animal->produce();
//    backpack.push_back(food);
//    farm.remove(animal);
//    delete animal;

//    strength -= strengthOfKillAnimal;
}

void Player::get(BackpackEntry* backpackEntry)
{
    backpack.push_back(backpackEntry);
}
