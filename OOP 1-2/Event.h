#pragma once
#include "Map.h"
#include "Cell.h"
#include "Player.h"

class Event
{
public:
    virtual void trigger(Player& player, Cell& cell) = 0;
};

