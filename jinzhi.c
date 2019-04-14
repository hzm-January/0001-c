#include <stdio.h>
/*
	进制
	1. C语言不能直接书写二进制
*/
void main(){
	
	int octonary = 017;
	int decimal = 12;
	int hexadecimal = 0x1F;
	
	printf("output octonary number by decimal: %d\n", octonary);
	printf("output decimal : %d\n", decimal);
	printf("output hexadecimal number by decimal : %d\n", hexadecimal);
	
	printf("------------------------\n");
	
	printf("octonary : %o\n", octonary);
	printf("decimal : %d\n", decimal);
	printf("hexadecimal : %x\n", hexadecimal); 
	printf("hexadecimal : %X\n", hexadecimal); 
	
	
}
