#include "Observer.h"
#include "Observable.h"
#include <iostream>

void Observer::attach(Observable *pub) {
    std::cout << "class:Observer method:attach\n";
    pub->addObserver(this);
}

void Observer::detach(Observable *pub) {
    std::cout << "class:Observer method:detach\n";
    pub->removeObserver(this);
}
