#ifndef PLAYER_H
#define PLAYER_H

#include "Point.h"

class Scene;
class PlayerController;

class Player {
public:
    Player(Point<double> cord, PlayerController* ctrl) :
        strength(100), coordinate(cord), controller(ctrl) {}
    virtual ~Player() = default;
    bool move(const Scene& place);
private:
    int strength;
    Point<double> coordinate;
    PlayerController* controller;
};

#endif
