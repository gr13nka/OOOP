#include "Trap.h"

void Trap::trigger(Player& player, Cell& cell) {
    player.change_hp(-1);
}