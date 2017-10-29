//
// Entity.h
// 实体类的定义，实体是所有生物类的共同基类，具备了共同的属性
//
#ifndef ENTITY_H
#define ENTITY_H

#include "Observer.h"

class Item;

class Entity : public Observer {
public:
    // 基类默认的虚析构函数
    virtual ~Entity() = default;
    
    // 每种实体被消灭之后都会有一个产物
    // 这里的产物可以根据实际情况而变更，作为 Item 类的一个抽象工厂而存在
    virtual Item* pick(void) = 0;

    // 实体类别的名字
    virtual const char* typeName() const = 0;

    virtual void getNotified(void) override;
};

#endif // ENTITY_H
