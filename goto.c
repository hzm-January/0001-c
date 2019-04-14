#include <stdio.h>
/*
	goto 跳转
	跳转实现的步骤
		1. 定义Flag标签
		2. goto Flag标签名 
*/
void main(){
	
	printf("hello world 1\n"); 
	goto Flag;
	printf("hello world 2\n"); 
	printf("hello world 3\n"); 
	Flag:
	printf("hello world 4\n"); 
	printf("hello world 5\n"); 
	
} 
