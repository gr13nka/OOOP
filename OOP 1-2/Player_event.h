#pragma once
#include "Event.h"

class Player_event :
    public Event
{
    void trigger(Player& player, Cell& cell);
};

