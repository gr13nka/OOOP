#include "Cell.h"
#include "Trap.h"
#include "Gate.h"
#include "Clear_cell.h"


Cell::Cell() {
    switch (rand() % 2)
    {
    case '0': {
        event = new(Clear_cell);
        cell_view = '.';
        break; }
    case 1: {
        event = new (Trap);
        cell_view = '&';
        break; }
    default:
        break;
    }
}

void Cell::empty() {
    event = new(Clear_cell);
    wall = false;
    cell_view = '.';
}

bool Cell::check_wall() {
    return wall;
}