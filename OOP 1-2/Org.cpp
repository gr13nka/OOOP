#include "Org.h"
#include <iostream>

std::pair<int, int> Org::read_size() {
	std::pair<int, int> size = std::make_pair(10, 10);
	return size;
}

std::pair <int, int> Org::handle_command() {
	char command;
	std::cin >> command;
	std::string action = "";

	switch (tolower(command))
	{
	case 'a':
		//player->setX(player->getX() - 1);
		action = "moved";
		return std::make_pair(-1, 0);
		break;
	case 'd':
		//player->setX(player->getX() + 1);
		action = "moved";
		return std::make_pair(1, 0);
		break;
	case 'w':
		//player->setY(player->getY() - 1);
		action = "moved";
		return std::make_pair(0, 1);
		break;
	case 's':
		//player->setY(player->getY() + 1);
		action = "moved";
		return std::make_pair(0, -1);
		break;
	case 'q':
		bool running = false;
		break;
	}
}
