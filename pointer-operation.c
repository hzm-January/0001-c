#include <stdio.h>
/*
	1. 指针相减，结果为两个指针的偏移量（偏移量是指相差多少个指针类型；如两个int*类型的指针p1-p2=10，表示相差10个int） 
	2. 指针不能相加，指针不能相乘，指针不能相除 ，指针不能相互取模 
	2. 指针+整数，是指针类型*整数个偏移，而不是整数个偏移；如int arr[5]={0}; int *p = arr; p++; 其中p++的结果是取下一个索引处的元素 
	4. 指针不能乘以整数；指针不能模整数；指针不能位移运算 
	3. 数组作为函数参数时，传递的是指针，所以不能再函数内使用sizeof(array)获取数组占用的字节数量，因为array是指针sizeof(array)获取的是指针占用的字节数量 
	4. 指针可以比较大小（< >等），进行逻辑运算 (&&或者||等)
*/

void iteratorByPointer(int array[], int length); 
void main(){
	
	int array[] = {0,1,2,3,4,5};
	int * p = array;
	int * q = &array[5];
	
	//使用指针遍历数组 
	iteratorByPointer(array, sizeof(array)/sizeof(array[0]));
	
	//指针相减 
//	int step = q-p;
//	printf("%d\n", step); 
	
} 
void iteratorByPointer(int array[], int length){
	int * p = array;
	printf("start|");
	for(int i=0;i<length;i++){
		printf("%d ", *p++);
	} 
	printf("|end");
}
