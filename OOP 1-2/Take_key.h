#pragma once
#include "Player_event.h"
class Take_key :
    public Player_event
{
    void trigger(Player& player, Cell& cell) {};
};

