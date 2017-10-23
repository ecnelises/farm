#include "Scene.h"
#include "Player.h"

int main(int argc, const char * argv[])
{
    Player player;
    Scene farm1(15, 20, "farm1");
    Scene farm2(30, 10, "farm2");
    Scene farm3(50, 60, "farm3");
    Scene farm4(2, 2, "farm4");
    player.move(farm1);
    player.move(farm2);
    player.move(farm3);
    player.move(farm4);
    return 0;
}
