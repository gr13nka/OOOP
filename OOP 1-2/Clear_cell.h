#pragma once
#include "Player.h"
#include "Cell.h"
#include "Map_event.h"

class Clear_cell :
    public Map_event
{
    void trigger(Player& player, Cell& cell) {};
};

