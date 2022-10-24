#pragma once
#include "Event.h"
#include "Map.h"
#include "Player.h"

class Map_event :
    public Event
{
    void trigger(Player& player, Cell& cell);
};

