#include "Player.h"

Player::Player() {
	stamina = 100;
	hp = 100;
	exp = 0;
}
Player::~Player() {}

void Player::change_hp(int a) {
	hp + a;
}

void Player::get_key() {
	key = true;
}
