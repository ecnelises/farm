#include "Observer.h"
#include "Observable.h"

void Observer::attach(Observable *pub) {
    pub->addObserver(this);
}

void Observer::detach(Observable *pub) {
    pub->removeObserver(this);
}
