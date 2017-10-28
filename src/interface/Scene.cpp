#include "Scene.h"
#include "Entity.h"
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
    for (auto i : entities) {
        delete i;
    }
    delete generateDecorator;
}

void Scene::realGenerate(void) {
    entities.push_back(this->spawn());
}

void Scene::generate(void) {
    auto dec = new SceneGenerateDecoratee(this);
    generateDecorator->act(dec);
    delete dec;
}
