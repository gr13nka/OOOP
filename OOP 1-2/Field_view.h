#pragma once
#include "Map.h"

class Field_view
{
private:
	Cell** map_view;
	void draw(Map& map);
};

