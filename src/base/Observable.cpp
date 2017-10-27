#include "Observable.h"
#include "Observer.h"

void Observable::addObserver(Observer* sub) {
    observers.push_back(sub);
}

void Observable::removeObserver(Observer* sub) {
    observers.remove(sub);
}

void Observable::notifyObservers(void) {
    for (auto i = observers.begin(); i != observers.end(); ++i) {
        (*i)->getNotified();
    }
}
