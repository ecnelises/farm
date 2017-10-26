#ifndef POINT_H
#define POINT_H

#include <cmath>

template<typename T>
struct Point {
    Point(T cord_x, T cord_y) : x(cord_x), y(cord_y) {}
    Point(const Point& prt) = default;

    T distance(const Point& rhs) const {
        auto xdiff = rhs.x - x;
        auto ydiff = rhs.y - y;
        return std::sqrt(xdiff * xdiff + ydiff * ydiff);
    }

    T x;
    T y;
};

template<typename T>
T operator - (const Point<T>& lhs, const Point<T>& rhs)
{
    return lhs.distance(rhs);
}

#endif // POINT_H
