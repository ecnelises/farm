#include "Scene.h"
#include "Decorator.h"

class SceneGenerateDecoratee : public Decoratee {
public:
    SceneGenerateDecoratee(Scene* sce) : scene(sce) {}
    virtual ~SceneGenerateDecoratee() = default;
    virtual void act(void);
private:
    Scene* scene;
};

void SceneGenerateDecoratee::act(void) {
    scene->realGenerate();
}

Scene::~Scene() {
    delete generateDecorator;
}

void Scene::realGenerate(void) {
    auto newbie = this->spawn();
    entities.push_back(std::unique_ptr<Entity>(newbie));
}

void Scene::generate(void) {
    auto dec = new SceneGenerateDecoratee(this);
    generateDecorator->act(dec);
    delete dec;
}
