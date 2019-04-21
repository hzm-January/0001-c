#include <stdio.h>
/*
	size_t 
	
	1. 为什么会出现size_t类型
		1.1 size_t 解决可移植问题。
			因为int和long在不同机器不同编译环境下，占用字节数量不同，所以存在移植问题，如果将函数的参数定义为size_t，就可以解决可移植问题 
			
	2. size_t是什么 
		size_t类型是一个类型定义，通常将一些无符号的整形定义为size_t，比如说unsigned int或者unsigned long，甚至unsigned long long。
		每一个标准C实现应该选择足够大的无符号整形来代表该平台上最大可能出现的对象大小
	
	3. size_t是怎么解决可移植问题的
		I16LP32架构上（整形是16-bit 长整形和指针类型时32-bits）显得不够用了，在这种情况下，处理器可能拷贝的数据大于65535个字节，但是unsigned int不能处理这么大的数据，需要使用unsigned long。
		IP16平台上相比于使用unsigned int，你使用unsigned long可能会使你的代码运行效率大打折扣（代码量变大而且运行变慢）
		将函数的参数类型设置为size_t，可以根据场景使用不同整数类型的数据
		 
	4. 什么场景下适合使用size_t 
		 参数中带有size_t的函数通常会含有局部变量用来对数组的大小或者索引进行计算。
*/
