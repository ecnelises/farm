#ifndef SIMPLE_PLAYER_CONTROLLER_H
#define SIMPLE_PLAYER_CONTROLLER_H

#include "PlayerController.h"

class Player;

class SimplePlayerController : public PlayerController {
public:
    SimplePlayerController(Player* plyr) : player(plyr) {}
    virtual ~SimplePlayerController() = default;
    virtual void takeAction(void) override;
    virtual void getPlayerStatus(void) override;
private:
    Player* player;
};

#endif // SIMPLE_PLAYER_CONTROLLER_H
