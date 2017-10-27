#include "Pool.h"
#include "Item.h"
#include "Entity.h"
#include "Animal.h"
#include <string>
#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <list>
#include <iterator>

class FishMeat : public Item {
public:
	FishMeat(std::string name, std::string des):Item(name,des) {
		//调用父类构造函数
	}
	void show() {
		std::cout << "This is FishMeat" << std::endl;
		std::cout << this->getDes() << std::endl;
	}
};

class FrogLeg : public Item {
public:
	FrogLeg(std::string name, std::string des) :Item(name, des) {
		//调用父类构造函数
	}
	void show() {
		std::cout << "This is FrogLeg" << std::endl;
		std::cout << this->getDes() << std::endl;
	}
};

class Fish : public Animal {
public:
	Fish(std::string name, int age) {
		this->name = name;
		this->age = age;
	}
	Animal* clone(void) const {
		return new Fish(name,0);
	}
	Item* pick(void){
		return new FishMeat("fishmeat","This is a piece of fishmeat!");
	}
	std::string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	void sendPickMessage(std::string message) {
		Pool::showCondition(this, message);
	}

private:
	std::string name;
	int age;
};

class Frog : public Animal {
public:
	Frog(std::string name, int age) {
		this->name = name;
		this->age = age;
	}
	Animal* clone(void) const {
		return new Frog(name, 0);
	}
	Item* pick(void) {
		return new FrogLeg("frogleg", "This is a frogleg!");
	}
	std::string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	void sendPickMessage(std::string message) {
		Pool::showCondition(this, message);
	}

private:
	std::string name;
	int age;
};

Animal* Pool::pick(void) {
	std::list<Animal*>::iterator it = animals.begin();
	int num = (rand() % (animals.size()));
	for (int i = 0; i < num; i++) {
		it++;
	}
	return *it;
}

std::list<Animal*> Pool::addAnimals(Animal* newAnimal) {
	animals.push_back(newAnimal);
	return animals;
}

int main() {
	Fish* fish = new Fish("BigFish", 2);
	Frog* frog = new Frog("HaHa", 1);
	fish->sendPickMessage("Fish is picked!");
	frog->sendPickMessage("Frog is picked!");
	return 0;
}

