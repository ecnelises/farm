#include "Farm.h"
#include "AnimalAdaptor.h"

/// 在 application 中[可能]的实现
//Animal* createAnimal() {
//    // 负责用户交互的组件获取要创建的 type
//    string type = component.getType();
//
//    AnimalAdapter animalAdapter;
//    return animalAdapter.adapt(type);
//}

virtual Entity* Farm::spawn(void) {
    auto newAnimal = createAnimal();

    return newAnimal;
}
