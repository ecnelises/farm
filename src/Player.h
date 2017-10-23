#ifndef PLAYER_H
#define PLAYER_H

class Scene;
class Food;

class Player {
public:
    Player(double px = 0.0, double py = 0.0);
    ~Player();
    bool move(const Scene& place);
    void eat(const Food& food);
private:
    int strength;
    double x;
    double y;
};

#endif
