//
// Animal.h
// 动物类的定义，继承自实体类，作为所有动物的基类存在
//
#ifndef ANIMAL_H
#define ANIMAL_H

#include "Entity.h"

class Animal : public Entity {
public:
    // 默认的基类析构函数
    virtual ~Animal() = default;

    // 动物具有繁殖的特征，可以以一个动物作为原型，进行繁殖，实现原型模式
    virtual Animal* clone(void) const = 0;

    // 基类提供的共同接口，动物死亡后掉落物品
    virtual Item* pick(void) = 0;
};

#endif
