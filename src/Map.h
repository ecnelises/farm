#ifndef MAP_H
#define MAP_H

#include "Scene.h"
#include <vector>
#include <memory>

class SceneStrategy;

class Map {
public:
    Map(unsigned n_init_scenes);
    ~Map();
    void iterateScenes(SceneStrategy* strategy);
    void spawnScene(void);
private:
    std::vector<std::unique_ptr<Scene>> scenes;
};

#endif // MAP_H
