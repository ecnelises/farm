//
// Map.h
// 地图类的定义
//
#ifndef MAP_H
#define MAP_H

#include "Scene.h"
#include "Positioned.h"
#include "Player.h"
#include "PlayerController.h"
#include <vector>
#include <memory>
#include <functional>

class SceneStrategy;
class SceneIterator;

// Map 类作为整个游戏当中场景的容器
class Map {
public:
    Map();
    ~Map();

    // 提供一组可以用户自行操作遍历的迭代器接口
    const SceneIterator cbegin(void) const;
    const SceneIterator cend(void) const;

    // 提供一组接口使得可以通过自定义的策略来遍历所有的场景
    void eachScene(SceneStrategy* strategy);
    void eachScene(std::function<void(Scene*)> fn);

    // 工厂方法，以生成新的场景
    void generateScene(void);

    Player& getPlayer() {
        return player.get();
    }
private:
    std::vector<Scene*> scenes;
    Positioned<Player> player;
};

#endif // MAP_H
