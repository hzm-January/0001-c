#include <stdio.h>
/*
	常量
	定义：在程序运行过程中，其值不能发生改变的量 
	定义方式一 （不安全） 
		const 数据类型 常量名称 = 值
		注：可以使用下一级指针修改常量的值 
	定义方式二：宏 （#define 数据类型 变量名称 = 值） 
*/ 
#define defineint 100
void main(){
	const int constint = 12;
	printf("the const is defined by const int number is : %d\n", constint);
	printf("the const is defined by define int number is : %d\n", defineint);
	
}
