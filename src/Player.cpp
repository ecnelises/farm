#include "Player.h"
#include "Scene.h"
#include "Food.h"
#include <cmath>
#include <iostream>

Player::Player(double px, double py)
{
    x = px;
    y = py;
    strength = 100;
}

Player::~Player()
{
}

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
