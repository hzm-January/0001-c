#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	function 函数
	1. 函数声明
			注：在main函数的文件中，函数的声明或定义必须在main函数之前，才能在main中调用到函数 
		 返回值类型 函数名 (参数列表)
		 1.1 可以声明其他.c文件中的函数，在当前.c文件中使用（其他.c文件中需要定义函数，可以没有extern声明） 
		 1.2 可以声明当前.c文件中的函数，提供给当前.c文件使用或者其他.c文件调用。（也可以在.h文件中声明 ） 
	2. 函数定义
		返回值类型 函数名 (参数列表) {实现}
	 
	3. 函数调用
		* 头文件： 包含指定的头文件
		* 函数名称：函数名称必须和头文件声明的名称一样
		* 功能：了解被调用函数的功能才能调用
		* 参数：参数类型匹配
		* 返回值：根据需要接受返回值
		 
	4. 函数中断
		4.1 子函数中，如果想要控制子函数结束返回到主函数，使用return
		4.2 子函数中，如果想要控制程序直接退出，可以使用exit(异常码) 
		
	5. 全局函数和静态函数
		全局函数：在C语言中函数默认都是全局的
		静态函数：使用关键字static可以将函数声明为静态
		函数定义为static就意味着这个函数只能在定义这个函数的文件中使用，
		在其他文件中不能调用，即使在其他文件中声明这个函数都没用。
		对于不同文件中的staitc函数名字可以相同。 
		
		
	 随机数 
	 time(time_t * t) // #include <time.h> 获取当前系统时间
	 srand(unsigned int seed) //#include<stdlib.h> 设置rand()产生随机数时的种子，如果seed形相同，rand()产生额随机数相同
	 rand(void) //#include <stdlib.h> 返回一个随机数值
	  
*/
// 声明函数
//extern int sum(int a, int b); //可以省略a和b，可以省略extern关键字 
int sum(int,int); // 简化版声明 
void testReturn();
void testExit();
void main(){
	
	//1. 测试函数调用 
//	printf(" 1+3 = %d\n", sum(1,3));
	
	//2. 测试函数中断
//	testReturn();
//	printf("the log after test-return\n");
	testExit();
	printf("the log after test-exit\n");
	 
	//. 随机数生成
//	srand((size_t)time(NULL));
//	for(int i=0;i<10;i++){
//		printf("50~120 : %d\n", rand()%50+70); 50-120 
//	} 
}
void testReturn(){
	printf("test return 1\n");
	printf("test return 2\n");
	return;
	printf("test return 3\n");
}
void testExit(){
	printf("test exit 1\n");
	printf("test exit 2\n");
	exit(404);
	printf("test exit 3\n");
}
int sum(int a, int b){
	return a+b;
} 
