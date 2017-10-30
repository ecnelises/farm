#include "FlyWeight.h"

template<typename T>
FlyWeight<T>::FlyWeight(T *val) {
    entity = val;
    refcnt = new unsigned(1);
}

template<typename T>
FlyWeight<T>::FlyWeight(const FlyWeight &fw) {
    entity = fw.entity;
    refcnt = fw.refcnt;
    ++(*refcnt);
}

template<typename T>
FlyWeight<T>::FlyWeight(FlyWeight &&fw) {
    entity = fw.entity;
    refcnt = fw.refcnt;
    fw.entity = nullptr;
    fw.refcnt = nullptr;
}

template<typename T>
FlyWeight<T>::~FlyWeight() {
    if (--(*refcnt) == 0) {
        delete entity;
        delete refcnt;
    }
}
