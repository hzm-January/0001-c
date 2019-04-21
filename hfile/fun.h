/*
	.h文件
	1. 为什么需要.h文件
		 .h文件是用来存放全局变量，函数声明，结构体的文件
	2. 如何解决.h文件循环包含
		2.1 在第一行添加 #pragma once 只能在window系统中起作用
		2.2 使用宏定义 , 名称格式  __名称_H__ 
			#ifndef 名称
			#define 名称
			.....//需要定义的内容 
			#endif  
			
	3. 多个.c和.h文件如何编译
		gcc -o 目标文件名源文件.c 源文件2.c ... 源文件.h  源文件2.h .... 
*/
#ifndef __FUN_H__
#define __FUN_H__
int sum(int a, int b);
#endif
