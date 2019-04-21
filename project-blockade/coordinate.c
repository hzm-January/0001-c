#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "global.h"
/*
	move to the specified coordinate
*/
void goto_coordinate(int x,int y){
	COORD print_snake_coord;
	print_snake_coord.X = x;
	print_snake_coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), print_snake_coord);
}
