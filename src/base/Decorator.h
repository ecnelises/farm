//
// Decorator.h
// 装饰器类定义，可以改写一个对象的方法，实现装饰模式
//
#ifndef DECORATOR_H
#define DECORATOR_H

// 具备某种行为的被装饰者
class Decoratee {
public:
    virtual void act(void) = 0;
};

// 不是虚基类，仅作为空的装饰器
class Decorator {
public:
    // 基类默认的析构函数
    virtual ~Decorator() = default;
    
    // 通过持有 Decoratee 对象来灵活地实现 before_action 等操作
    virtual void act(Decoratee* dec);
};

#endif // DECORATOR_H
