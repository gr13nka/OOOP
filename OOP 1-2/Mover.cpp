#include "Mover.h"

void Mover::Move(Map& map) {
    command = org.handle_command();
    map.getMap()[Player_Y][Player_X].empty();
    Player_X += command.first;
    Player_Y += command.second;
    check_bounds(map);


}

std::pair<int, int> Mover::check_bounds(Map& map) {

    if (map.getMap()[Player_Y][Player_X].check_wall()) {
        Player_X -= command.first;
        Player_Y -= command.second;
        return std::make_pair(Player_X, Player_Y);
    }

    if (Player_X >= map.get_map_size().first) {
        Player_X = 0;
        return std::make_pair(Player_X, Player_Y);
    }
    if (Player_X < 0) {
        Player_X = map.get_map_size().first;
        return std::make_pair(Player_X, Player_Y);
    }
    if (Player_Y >= map.get_map_size().second)
        Player_Y = 0;
    return std::make_pair(Player_X, Player_Y);
    if (Player_Y < 0)
        Player_Y = map.get_map_size().second;
    return std::make_pair(Player_X, Player_Y);

}