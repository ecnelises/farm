#include "Scene.h"
#include <cmath>

Scene::Scene(double px, double py, std::string n)
{
    x = px;
    y = py;
    name = n;
}

Scene::~Scene()
{
}

double Scene::getX(void) const
{
    return x;
}

double Scene::getY(void) const
{
    return y;
}

const std::string& Scene::getName() const
{
    return name;
}

double Scene::distance(double x1, double y1, double x2, double y2)
{
    double xdiff = x1 - x2;
    double ydiff = y1 - y2;
    return std::sqrt(xdiff * xdiff + ydiff * ydiff);
}
