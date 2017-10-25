#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Farm.h"
#include "Backpack.h"
#include "BackpackEntry.h"

class Scene;
class Food;

class Player {
public:
    Player(double px = 0.0, double py = 0.0);
    ~Player() = default;
    bool move(const Scene& place);
    void eat(const Food& food);
    bool kill(const Farm& farm, std::string type);
    void get(BackpackEntry* backpackEntry);
private:
    int strength;
    double x;
    double y;
    Backpack backpack;
};

#endif
