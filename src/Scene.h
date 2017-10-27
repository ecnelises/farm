#ifndef SCENE_H
#define SCENE_H

#include "Point.h"
#include <string>
#include <cmath>

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

	const int distance(Point<double> coor1) const{
		int distance = std::ceil(sqrt((coordinate.x - coor1.x)*(coordinate.x - coor1.x) + (coordinate.y - coor1.y)*(coordinate.y - coor1.y)));
		return distance;
	}

private:
    Point<double> coordinate;
    std::string name;
};

#endif // SCENE_H
