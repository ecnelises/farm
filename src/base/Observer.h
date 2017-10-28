//
// Observer.h
// 观察者类的定义，实现观察者模式
//
#ifndef OBSERVER_H
#define OBSERVER_H

class Observable;

class Observer {
public:
    // 增加一个订阅关系
    void attach(Observable* pub);

    // 移除一个订阅关系
    void detach(Observable* pub);

    // 事件发生
    virtual void getNotified(void) = 0;
};


#endif // OBSERVER_H
