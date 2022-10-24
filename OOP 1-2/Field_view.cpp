#include "Field_view.h"

void Field_view::draw(Map& map) {
	std::pair<int, int> field_size;
	field_size = map.get_map_size();
	Cell** map_view = map.getMap();

	for (int i = 0; i < field_size.first; i++) {
		std::cout << '\n';
		for (int j = 0; j < field_size.second; j++) {
			std::cout << map_view[i][j].cell_view;
		}
	}
}