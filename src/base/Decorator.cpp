#include "Decorator.h"

// 默认的装饰器不附加任何操作，原样执行被装饰者的指定动作
void Decorator::act(Decoratee* dec) {
    dec->act();
}
