//Written by nature; 2017.10.26 ; 21:05
#ifndef POOL_H
#define POOL_H

#include "Scene.h"
#include "Animal.h"
#include <list>

class Pool : public Scene
{
public:
	Animal* pick(void);
	std::list<Animal*> addAnimals(Animal);
private:
	std::list<Animal*> animals;
};

#endif // ! POOL_H
