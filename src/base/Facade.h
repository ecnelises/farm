#ifndef FACADE_H
#define FACADE_H
#include"Player.h"
#include"Sheep.h"
#include"Mutton.h"
class Facade {
public:
	virtual ~Facade()=default;
	void wrapOpration(Player* player,Sheep* sheep);
private:
	Farm &farm;
};


#endif