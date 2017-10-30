#ifndef PLAYER_CONTROLLER_H
#define PLAYER_CONTROLLER_H
#include"Facade.h"
class Player;

class PlayerController {
public:
    virtual ~PlayerController() = default;
    virtual void takeAction(void) = 0;
    virtual void getPlayerStatus(void) = 0;
	virtual Facade* opration(void);
};

#endif // PLAYER_CONTROLLER_H
