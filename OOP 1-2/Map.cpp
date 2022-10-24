#include "Map.h"
#include "Cell.h"
#include "Org.h"

Map::Map() {
    Org org;
    std::pair<int, int> map_size = org.read_size();

    x = map_size.first;
    y = map_size.second;

    map = new Cell * [y];

    for (int i = 0; i < y; i++) {
        map[i] = new Cell[x];
    }

    //  exity = rand() % y;
    //     exitx = rand() % x;
    //     field[exity][exitx].save_simbol('D');
    //     field[exity][exitx].f = new(level_exit);
    //     field[0][0].discharge();
    //     field[0][0].show_player();
    //     std::cout << std::endl;  
}

Cell** Map::getMap() {
    return map;
}

std::pair<int,int> Map::get_map_size() {
    return std::make_pair(x,y);
}