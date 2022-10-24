#pragma once
#include "Player_event.h"

class Trap :
    public Player_event
{
    void trigger(Player& player, Cell& cell);
};

