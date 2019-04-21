#include <windows.h>
#include "global.h"
/*
	set color
*/
int set_color(enum GAME_COLOR snake_color){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), snake_color);
	return 0;
}

