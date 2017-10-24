#ifndef SCENE_H
#define SCENE_H

#include <string>

class Scene {
public:
    Scene(double fx, double fy, std::string n);
    virtual ~Scene() = default;
    double getX(void) const;
    double getY(void) const;
    const std::string& getName() const;
    static double distance(double x1, double y1, double x2, double y2);
private:
    double x;
    double y;
    std::string name;
};

#endif // SCENE_H
