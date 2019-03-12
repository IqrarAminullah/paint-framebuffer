#ifndef CONTROL
#define CONTROL

#include <vector>

#include "paint.hpp"
#include "control.hpp"

#define COMMAND_QUIT ' '
#define COMMAND_DRAW_RECTANGLE 'r'
#define COMMAND_CURSOR_MOVE_LEFT 'a'
#define COMMAND_CURSOR_MOVE_RIGHT 'd'
#define COMMAND_CURSOR_MOVE_UP 'w'
#define COMMAND_CURSOR_MOVE_DOWN 's'

void readInput(Paint* paint);

#endif
