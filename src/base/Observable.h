//
// Observable.h
// 抽象出发布者的逻辑，实现观察者模式
//
#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <list>

class Observer;

class Observable {
public:
    // 基类的默认析构函数
    // Observable 对 Observer 不构成所有权关系，不结束它们的生命周期
    virtual ~Observable() = default;

    // 添加一个观察者
    void addObserver(Observer* sub);

    // 移除一个观察者，如果不存在则无动作
    void removeObserver(Observer* sub);

    // 向所有的观察者发送消息
    void notifyObservers(void);
private:
    std::list<Observer*> observers;
};

#endif // OBSERVABLE_H
