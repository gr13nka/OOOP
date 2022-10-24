#pragma once
#include "Map_event.h"

class Gate :
    public Map_event
{
private:
    void trigger(Player& player, Cell& cell);
};

