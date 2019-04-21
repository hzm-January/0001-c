#include <stdio.h>
/*
	typedef
	1. 使用场景
		1.1 为已存在的定义起别名 
		1.2 定义函数指针	 
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
