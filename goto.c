#include <stdio.h>
/*
	goto ��ת
	��תʵ�ֵĲ���
		1. ����Flag��ǩ
		2. goto Flag��ǩ�� 
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
