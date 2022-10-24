#pragma once
#include "Org.h"
#include "Cell.h"
#include <iostream>
class Map
{
private:
    Org org;
    int x, y;
    Cell** map;
public:
    Cell** getMap();
    std::pair<int, int> get_map_size();
};

