//
// Created by nature on 2017/10/30. ProxyPool类，代理类，代理Pool类进行简单的命名操作
//

#ifndef FARM_PROXYPOOL_H
#define FARM_PROXYPOOL_H

#include "Scene.h"
#include "Animal.h"
#include "Log.h"
#include "Pool.h"
#include <list>
#include <string>

class ProxyPool : public Scene
{
public:
    ProxyPool(Decorator* dec = new Decorator) : Scene("Farm", dec) {}
    void setName(std::string name){
        if(pool == nullptr) {
            Pool *pool = new Pool();
        }
        pool->setName(name);
    }
private:
    Pool* pool;
};

#endif //FARM_PROXYPOOL_H
