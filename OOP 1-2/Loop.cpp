#include "Loop.h"
#include "Player.h"
#include "Map.h"
#include "Field_view.h"

void Loop::start() {
    Player player;
    Map map();
    while (player.Player_alive == true)
    {

        Field_view.draw();
        Controller.handle_action();
    }

}