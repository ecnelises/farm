
#include"Facade.h"

void Facade::wrapOpration(Player* player,Sheep* sheep) {
	player->hunt(farm,"sheep");
	(sheep->pick)->usedBy(player);
}