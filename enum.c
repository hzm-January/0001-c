#include <stdio.h>
#include <stdlib.h>
enum GAME_COLOR {
    COLOR_RED,
    COLOR_GREEN,
};
void color(enum GAME_COLOR color);
int main(int argv, char * argc[]){
	color(1);
	color(COLOR_RED);
	color(COLOR_GREEN);
}; 
void color(enum GAME_COLOR color){
	printf("%d \n", color);
}

