#pragma once
#include "Map.h"
#include "Org.h"
#include "Cell.h"

class Mover
{
private:
	int Player_X = 0;
	int  Player_Y = 0;
	std::pair<int, int> command;
	Org org;

public:
	void Move(Map& map);
	std::pair<int, int> check_bounds(Map& map);
};

