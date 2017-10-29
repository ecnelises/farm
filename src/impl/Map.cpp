#include "Map.h"
#include "SimplePlayerController.h"
#include "Pasture.h"
#include "Farm.h"
#include <iostream>
#include <random>
#include <ctime>

Map::Map() : player({0, 0}) {
    std::cout << "Map initialized\n";
    player.get().setController(new SimplePlayerController(&player.get()));
    std::uniform_int_distribution<int> dis(7, 15);
    std::random_device rd;
    std::mt19937 gen(rd());
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
    std::cout << "class:Map method:eachScene\n";
    for (auto i : scenes) {
        strategy->act(i);
    }
}

void Map::eachScene(std::function<void(Scene*)> fn) {
    std::cout << "class:Map method:eachScene\n";
    for (auto i : scenes) {
        fn(i);
    }
}

void Map::generateScene(void) {
    std::cout << "class:Map method:generateScene\n";
    std::uniform_int_distribution<int> dis(0, 1);
    std::random_device rd;
    std::mt19937 gen(rd());
    if (dis(gen)) {
        scenes.push_back(new Farm);
    } else {
        scenes.push_back(new Pasture);
    }
}
