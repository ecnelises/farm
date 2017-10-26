#ifndef SCENE_H
#define SCENE_H

#include "Point.h"
#include <string>

class Scene {
public:
    Scene(Point<double> cord, std::string n) : coordinate(cord), name(n) {}
    virtual ~Scene() = default;

    const Point<double>& getCoordinate(void) const {
        return coordinate;
    }

    const std::string& getName() const {
        return name;
    }

private:
    Point<double> coordinate;
    std::string name;
};

#endif // SCENE_H
