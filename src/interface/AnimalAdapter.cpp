#include "AnimalAdaptor.h"

virtual Animal* AnimalAdaptor::adapt(string type) {
    if (type == "pig") {
        return new Pig();
    } else if (type == "sheep") {
        return new Sheep();
    }

    return nullptr;
}
