#include <stdio.h>
/*
	typedef
	1. ʹ�ó���
		1.1 Ϊ�Ѵ��ڵĶ�������� 
		1.2 ���庯��ָ��	 
*/
struct member {
	int num;
	char name[21];
	int age;
	char gender;
	char address[51]; 
};
typedef struct member mb;
int main(int argc, char * argv[]){
	
	mb aa = {12};
	return 0;
}
