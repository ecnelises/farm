#ifndef STATE_H
#define STATE_H

 #include"Player.h"

class Player;

class State {
public:
    virtual ~State() = default;
	virtual void Operate(Player* player) = 0;
};

#endif
