#include "SimplePlayerController.h"
#include "Player.h"
#include <iostream>

void SimplePlayerController::takeAction(void) {
    std::cout << "class:SimplePlayerController "
        "method:takeAction\n";
}

void SimplePlayerController::getPlayerStatus(void) {
    std::cout << "class:SimplePlayerController "
        "method:getPlayerStatus\n";
    int cnt = 0;
    auto& bkpk = player->getBackpack();
    for (auto i = bkpk.begin(); i != bkpk.end(); ++i) {
        std::cout << ++cnt << " : " << (*i)->name() << '\n';
    }
}
