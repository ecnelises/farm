//
// Modified by nature on 2017/10/30.
//

#ifndef POOL_H
#define POOL_H

#include "Scene.h"
#include "Animal.h"
#include "Log.h"
#include "PoolMemento.h"
#include "PoolCareTaker.h"
#include <list>
#include <string>

class Pool : public Scene
{
public:
	Animal* pick(void);
	std::list<Animal*> addAnimals(Animal);
	void setName(std::string name) {
		this->name = name;
	}
	void showLog(std::string message){
		Log::Show(this,message);
	}
    PoolMemento Save()
    {
        PoolMemento poolMemento(name, animals);
        return poolMemento;
    }
    void Load(PoolMemento memento)
    {
        name = memento.name;
        animals = memento.animals;
    }
private:
	std::list<Animal*> animals;
	std::string name;
};

#endif // ! POOL_H
