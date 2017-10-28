#include "Map.h"
#include "SimplePlayerController.h"
#include "Pasture.h"
#include "Farm.h"
#include <iostream>
#include <random>
#include <ctime>

Map::Map() : player(Player(), {0, 0}) {
    std::cout << "Map initialized\n";
    std::default_random_engine gen;
    std::uniform_int_distribution<int> dis(7, 15);
    int times = dis(gen);
    for (int i = 0; i < times; ++i) {
        generateScene();
    }
}

Map::~Map() {
    for (auto i : scenes) {
        delete i;
    }
}

void Map::eachScene(SceneStrategy* strategy) {
    for (auto i : scenes) {
        strategy->act(i);
    }
}

void Map::eachScene(std::function<void(Scene*)> fn) {
    for (auto i : scenes) {
        fn(i);
    }
}

void Map::generateScene(void) {
    auto seed = std::time(NULL) % 2;
    if (seed) {
        scenes.push_back(new Farm);
    } else {
        scenes.push_back(new Pasture);
    }
}
