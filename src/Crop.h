//
// Crop.h
// 作物类，继承自实体类，作为不同作物类型的基类
//
#ifndef CROP_H
#define CROP_H

#include "Entity.h"

class Crop : public Entity {
public:
    // 基类的默认析构函数
    virtual ~Crop() = default;

    // 继承自基类的方法，作物被采摘后会掉落物品
    virtual Item* pick(void) = 0;
};

#endif
