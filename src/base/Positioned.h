//
// Positioned.h
// 表示有坐标的类模版，将位置属性与类本身逻辑抽离
//
#ifndef POSITIONED_H
#define POSITIONED_H

#include "Point.h"
#include <utility>

template<typename T>
class Positioned {
public:
    Positioned(Point<double> pos) : position(pos) {}
    ~Positioned() = default;

    const Point<double>& getPosition() const {
        return position;
    }

    void setPosition(double x, double y) {
        position.x = x;
        position.y = y;
    }

    // const 和非 const 两个版本
    const T& get() const {
        return entity;
    }

    T& get() {
        return entity;
    }
private:
    T entity;
    Point<double> position;
};

#endif // POSITIONED_H
