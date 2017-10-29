#include "Scene.h"
#include "Entity.h"
#include "Decorator.h"
#include <iostream>

class SceneGenerateDecoratee : public Decoratee {
public:
    SceneGenerateDecoratee(Scene* sce) : scene(sce) {}
    virtual ~SceneGenerateDecoratee() = default;
    virtual void act(void);
private:
    Scene* scene;
};

void SceneGenerateDecoratee::act(void) {
    std::cout << "class:SceneGenerateDecoratee method:act\n";
    scene->realGenerate();
}

Scene::~Scene() {
    for (auto i : entities) {
        delete i;
    }
    delete generateDecorator;
}

void Scene::realGenerate(void) {
    std::cout << "class:Scene method:realGenerate\n";
    notifyObservers();
    auto newbie = this->spawn();
    newbie->attach(this);
    entities.push_back(newbie);
}

void Scene::generate(void) {
    std::cout << "class:Scene method:generate\n";
    auto dec = new SceneGenerateDecoratee(this);
    generateDecorator->act(dec);
    delete dec;
}

Entity* Scene::remove(int id) {
    std::cout << "class:Scene method:remove\n";
    if (id <= 0 || id > entities.size()) {
        return nullptr;
    }
    auto entity = entities[id - 1];
    entities.erase(entities.cbegin() + id - 1);
    entity->detach(this);
    return entity;
}
