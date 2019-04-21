#include <stdio.h>
/*
	常量
	定义：在程序运行过程中，其值不能发生改变的量 
	定义方式一 
		const 数据类型 常量名称 = 值
		注：可以使用下一级指针修改常量的值 
		
		const 定义的局部变量时不安全的，可以通过指针进行修改 
		const 定义的全局变量是安全的，存储在内存中的数据常量区，不能修改 
	定义方式二：宏 （#define 数据类型 变量名称 = 值） 
		宏定义的常量是安全的。 
*/ 
#define defineint 100
void main(){
	const int constint = 12;
	printf("the const is defined by const int number is : %d\n", constint);
	printf("the const is defined by define int number is : %d\n", defineint);
	
}
