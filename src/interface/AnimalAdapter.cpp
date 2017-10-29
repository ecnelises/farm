#include "AnimalAdaptor.h"
#include "Sheep.h"

Animal* AnimalAdaptor::adapt(const std::string& type) {
    if (type == "sheep") {
        return new Sheep;
    } else {
        return nullptr;
    }
}
