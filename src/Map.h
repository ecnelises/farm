//
// Map.h
// 地图类的定义
//
#ifndef MAP_H
#define MAP_H

#include "Scene.h"
#include <vector>
#include <memory>

class SceneStrategy;
class SceneIterator;

// Map 类作为整个游戏当中场景的容器
class Map {
public:
    Map(unsigned n_init_scenes);
    ~Map();

    // 提供一组可以用户自行操作遍历的迭代器接口
    const SceneIterator cbegin(void) const;
    const SceneIterator cend(void) const;

    // 提供一组接口使得可以通过自定义的策略来遍历所有的场景
    void iterateScenes(SceneStrategy* strategy);

    // 工厂方法，以生成新的场景
    void spawnScene(void);
private:
    std::vector<std::unique_ptr<Scene>> scenes;
};

#endif // MAP_H
