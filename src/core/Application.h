//
// Application.h
// 项目类的定义
//
#ifndef APPLICATION_H
#define APPLICATION_H

#include "Map.h"
#include "Singleton.h"

// Application 类包含了整个程序的运行逻辑
// 主程序通过调用 run 方法进入
// 利用奇异递归模版模式的手法，子类扩展了父类的方法，自成单例
class Application : public Singleton<Application> {
public:
    void run(void);
    void setExit(bool val) {
        exitFlag = val;
    }
    Map& getMap() {
        return map;
    }
private:
    Map map;
    bool exitFlag;
};

#endif
