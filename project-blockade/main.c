#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
#include "global.h"
/* 
	this project is a game whose name is 'blockade'
*/

/* extern methods */
void print_snake();	


int main(int argc, char *argv[]) {
	//0. set the size of console scene
	system("mode con cols=100 lines=30"); 
	//1. print a snake
	print_snake();
	return 0;
}
/*
	print snake
*/
void print_snake(){
	//1. set color
	//2. goto coordination
	//3. print a snake
	
	goto_coordinate(35,1);
	set_color(COLOR_YELLOW);
	printf("/^\\/^\\");      //…ﬂ—€æ¶

	goto_coordinate(34,2);
	printf("|__|  O|");      //…ﬂ—€æ¶

	goto_coordinate(33,2);
	set_color(COLOR_YELLOW);
	printf("_");

	goto_coordinate(25,3);
	set_color(12);
	printf("\\/");      	//…ﬂ–≈

	goto_coordinate(31,3);
	set_color(2);
	printf("/");

	goto_coordinate(37,3);
	set_color(6);
	printf(" \\_/");     	//…ﬂ—€æ¶

	goto_coordinate(41,3);
	set_color(10);
	printf(" \\");

	goto_coordinate(26,4);
	set_color(COLOR_RED);
	printf("\\____");   	//…‡Õ∑

	goto_coordinate(32,4);
	printf("_________/");

	goto_coordinate(31,4);
	set_color(2);
	printf("|");

	goto_coordinate(43,4);
	set_color(10);
	printf("\\");

	goto_coordinate(32,5);
	set_color(2);
	printf("\\_______");    //…ﬂ◊Ï

	goto_coordinate(44,5);
	set_color(COLOR_GREEN);
	printf("\\");

	goto_coordinate(39,6);
	printf("|     |                  \\");  //œ¬√Ê∂º «ª≠…ﬂ…Ì

	goto_coordinate(38,7);
	printf("/      /                   \\");

	goto_coordinate(37,8);
	printf("/      /                    \\ \\");

	goto_coordinate(35,9);
	printf("/      /                       \\ \\");

	goto_coordinate(34,10);
	printf("/     /                          \\  \\");

	goto_coordinate(33,11);
	printf("/     /             _----_         \\   \\");

	goto_coordinate(32,12);
	printf("/     /           _-~      ~-_         |  |");

	goto_coordinate(31,13);
	printf("(      (        _-~    _--_    ~-_     _/  |");

	goto_coordinate(32,14);
	printf("\\     ~-____-~    _-~    ~-_    ~-_-~    /");

	goto_coordinate(33,15);
	printf("~-_           _-~          ~-_       _-~");

	goto_coordinate(35,16);
	printf("~--______-~                ~-___-~");
}

