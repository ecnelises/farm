//Written by nature; 2017.10.26 ; 21:05
#ifndef POOL_H
#define POOL_H

#include "Scene.h"
#include "Animal.h"
#include <iostream>
#include <string>
#include <list>

class Pool : public Scene
{
public:
	Pool(std::string n, Decorator* dec = new Decorator):Scene(n, dec){}
	Animal* pick(void);
	std::list<Animal*> addAnimals(Animal*);
	static void showCondition(Animal* animal, std::string message) {
		std::cout << (animal->pick()->getDes()) << std::endl;
	}
private:
	std::list<Animal*> animals;
};

#endif // ! POOL_H
