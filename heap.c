#include <stdio.h>
#include <stdlib.h>

/*
	heap 堆内存操作
	1. 常见问题
		堆内存释放操作必须针对申请的指针进行释放，如果申请的指针被修改过，会抛出异常
		堆内存申请指针，对应空间应该是指针类型字节数目的整数倍，比如int * 申请空间是4,8,12...
		堆内存申请空间后，不能指针越界，否则会抛出异常
		堆内存不能多次释放
			如果需要多次释放，将释放后的指针置为空. free(p);p=NULL;free(p); 
		*****同级指针，参数传递是值传递
		如果想在被调用函数中修改自己的指针地址，有两种方式实现
			1. 将指针作为参数传入，并return
			2. 将指针的地址作为参数传入，用下一级指针接收，并使用*下一级指针进行地址申请或者指针地址 
*/ 
#define NUM 10
void test01();
void test02();
int * applym(); 
int * fillm(void * pointer);
void iterator(void * pointer);
int * backp(int * pointer);
void main(){
	//1. 
//	test01();
	//2.
	test02();
} 
void test02(){
	int * intmemory = (int *)malloc(37); //非4的整数倍
	intmemory = fillm(intmemory);
	intmemory = backp(intmemory); 
	iterator(intmemory);
	free(intmemory);
}
void test01(){
	//1. 申请内存
	int * intmemory = applym(); 
	printf("指针作为参数传递，调用函数调用前打印: %p\n", intmemory);
	intmemory =  fillm(intmemory);
	printf("指针作为参数传递，调用函数调用后打印: %p\n", intmemory);
	intmemory = backp(intmemory); 
	iterator(intmemory);
	// 被移动后的指针不能释放 
	//free(intmemory); //error
//	printf("memory: %p\n", intmemory);

//	intmemory-=NUM; 
//	printf("memory: %p\n", intmemory);
	free(intmemory); 
	//释放后的指针为野指针， 最好不要使用
//	printf("memory: %p\n", intmemory);
}
// 回退指针
int * backp(int * pointer){
	pointer-=NUM;
	return pointer;
} 
// 填充空间 
int * fillm(void * pointer){
	int * intmemory = (int*) pointer;
	printf("指针作为参数传递，被调用函数中打印：%p\n", intmemory);
	for(int i=0;i<NUM;i++){
		*intmemory++ =i;
	}
	return  intmemory;
}
// 遍历空间 
void iterator(void * pointer){
	int * intmemory = (int *)pointer;
	for(int i=0;i<NUM;i++){
		printf("第 %d 个元素为：%d\n", i, *(intmemory+i));
	}
}
//申请空间 
int * applym(){
	int * intmemory = (int *)malloc(sizeof(int)*NUM); 
	if(!intmemory){ //检查是否申请到内存 
		return 0;
	} 
	return intmemory;
} 

