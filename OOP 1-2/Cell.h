#pragma once
#include "Event.h"

class Cell
{
private:
    bool wall = false;
    Event* event;

public:
    Cell();
    char cell_view = '.';
    void empty();
    bool check_wall();
};