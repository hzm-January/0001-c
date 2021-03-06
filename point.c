#include <stdio.h>
/*
	指针
	
	1. 指针是什么
		指针是一个保存地址(无符号16进制整数)的变量
		
	2. 指针如何定义
		数据类型* 指针名 = 地址；（通常初始化为0或者NULL，0地址是系统预留出来的空指针，不允许访问操作） 
		注：数据类型* 可以看做是指针类型 
		注：指针类型必须对应指向地址的数据类型，如果不一致，如：char chr = 97; int *p = &chr; 使用*p在取值的时候取4个字节的地址上的值，而不是char一个字节地址上的值 
	3. 如何取出指针指向地址的数据
		使用取值运算符 *  
		
	4. 指针占用几个字节
		指针和机器字长操作系统有关，32位操作系统指针占用32/8=4个字节，64位操作系统指针占用64/8=8个字节 

	5. 如何通过一级指针修改变量值
		*指针名 = 新值 
	
	6. *和&
		* 是取值符号，降维度
		& 是取地址符号，增维度 

	7. 野指针
		指针指向未知内存空间
		7.1 如果野指针指向的地址是0-255（系统占用不允许访问操作），在*p访问时会报错 
		7.2 如果野指针指向的地址不是0-255（允许访问操作），*p取值会取出莫名其妙的值 
	8. 空指针
		指向地址0或者NULL的指针，空指针不允许访问操作
		8.1 使用场景：可以作为条件判断是否申请到内存空间
	
	9. 万能指针
		 可以接收任意类型变量内存地址的指针
		 注：通过万能指针修改变量或者输出时，必须转换为对应的指针类型才能进行操作 
		 
	10. const
		const int * p; int const * p; //const修饰指针类型，不能通过指针修改指针指向地址上的值，可以修改指针指向的地址
		int * const p; //const修饰指针， 能通过指针修改指针指向地址上的值，不可以修改指针指向的地址
		
	11. 二级指针
		int ** p; 
		
		
*/
void main(){
	/*
		指针的定义与使用 
	*/ 
//	int a = 10;
//	int* p = &a;
//	printf("int value is %d \n", a);
//	printf("int address is %p \n", &a);
//	printf("point value is %p \n", p);
//	// 通过指针修改变量值
//	*p = 100;
//	printf("after modify...\n");
//	printf("int value is %d \n", a);
//	printf("int address is %p \n", &a);
//	printf("point value is %p \n", p);

	//野指针和空指针 
//	int* p = 0;
//	printf("%p\n", p); 
//	printf("%d|end\n", *p); //程序未响应退出 

	// 万能指针
	int p = 12;
	void *q = &p;
	//*q = 122; //[Error] invalid use of void expression
	*(int*)q = 122;
	printf("%d\n", p); 
	
} 
