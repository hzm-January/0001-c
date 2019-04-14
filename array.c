#include <stdio.h>
/*
	一维数组
	
	1. 数组定义
		数据类型 数组变量名 [元素个数] = {值1，值2，.....}; 
		数据类型 数组变量名 [存储元素个数的变量] = {值1，值2，.....}; (c99以后) 
	注：c99 之前元素数量必须是编译时刻确定的字面量；c99 之后元素数量可以使用变量定义 
	注：数组定义后，必须初始化后才能使用 
	
	2. 初始化
		2.1 数据类型 数组变量名 [元素个数] = {值1，值2，.....}; 
		2.2 数据类型 数组变量名 [元素个数] = {值1}; // 如果元素个数>1，余下的元素被初始化为0 
		2.3 数据类型 数组变量名 [元素个数] = {[指定索引1]=值1,[指定索引2]=值2}; // 除了指定索引，余下的元素被初始化为0 
		2.4 数据类型 数组变量名 [] = {值1，值2，.....}; 
			其中元素个数由 编译器 判断得出
	3. 访问元素
		数组变量名[索引]
	4. 元素在内存中的存储位置
		4.1 数组是内存中连续相同类型的变量空间，大小为元素个数*元素类型大小 
		4.2 数组要求所有元素类型一致
	5. 数组名是一个指向数组首地址的常量const类型的指针，不可修改指向，两个数组不可相互赋值
	6. 数组下标越界
		6.1 数组下标允许使用负数，是数组越界的一种 
		6.2 下标越界是运行时异常 
		6.3 如果数组下标越界，会访问到内存中相应的地址，如果地址允许访问会打印莫名其妙的数据，如果地址不允许访问会报运行时异常
		 
	 
*/
#define ARRAY_LENGTH 10
void iterator();
void separator();
void elementAddress();
void main()
{
	// 1.定义与初始化 
//	int array[4] = {1,2,3,4};	
//	iterator(array, sizeof(array)/sizeof(array[0]));
//	int array2[] = {1,2,3};
//	iterator(array2, sizeof(array2)/sizeof(array2[0]));
//	int array3[ARRAY_LENGTH] = {[1]=1,[3]=3};
//	iterator(array3, sizeof(array3)/sizeof(array3[0]));
//	int array4[4] = {1};	
//	iterator(array4, sizeof(array4)/sizeof(array4[0]));
	// 使用变量定义数组大小 
//	int arrayLength = 10;
//	//int array6[arrayLength]={1}; //[Error] variable-sized object may not be initialized使用变量定义数组长度的数组，不可以同时初始化 
//	int array6[arrayLength]; //在此行代码之后必须一一赋值，如果只是部分赋值，那么其他未赋值位置的元素会出现莫名其妙的数字 
//	array6[0]=12;
//	iterator(array6, sizeof(array6)/sizeof(array6[0])); //12 0 4199831 0 8 0 4203921 0 4202912 0
	
	 
	// 2.在内存中的存储和大小
//	int arrayInMemory [4] = {1,2,3,4};
//	elementAddress(arrayInMemory, sizeof(arrayInMemory)/sizeof(arrayInMemory[0]));
//	printf("the array size in memory is %d \n", sizeof(arrayInMemory));
//	printf("a element size of the array in memory is %d \n", sizeof(arrayInMemory[0]));
//	printf("the array length is %d\n", sizeof(arrayInMemory)/sizeof(arrayInMemory[0]));

	// 3. 数组变量名是一个地址常量 
//	int arrayIsConst[2] ={1}; 
//	printf("the array variable is %p\n", arrayIsConst);
	//int arrayIsConst2[2]={1};
	// arrayIsConst = arrayIsConst2;  // [Error] assignment to expression with array type
	
	
	// 4. 用户指定数组长度
//	int length = 10;
//	printf("Please input the length : ");
//	scanf("%d", &length);
//	//int array[length]={0}; //error [Error] variable-sized object may not be initialized 使用变量定义数组长度的数组，不可以同时初始化 
//	int index = 0; 
//	if(length>0){
//		int array5[length];
//		while(index<length){
//			printf("Please input the number at %d : ", index);
//			scanf("%d", &array5[index]);
//			index++;
//		}
//		printf("the length of the array is : %d\n", sizeof(array5)/sizeof(array5[0])); 
//		iterator(array5, sizeof(array5)/sizeof(array5[0]));
//	}
	
	 //5. 数组逆置
//	int array10[10]={1,2,3,4,5,6,7,8,9,10};
//	int length = sizeof(array10)/sizeof(array10[0]);
//	iterator(array10, length);
//	for(int i=0,j=length-1;i<j;i++,j--){
//		int temp = array10[i];
//		array10[i] = array10[j];
//		array10[j] = temp;
//	}
//	iterator(array10, length);
} 
// 
void iterator(int array [], int length)
{
	printf("the length of the array is %d\n", length); 
	for(int i =0; i<length;i++){
		printf("%d ", array[i]);
	}
	separator();
}
void elementAddress(int array[], int length)
{
	for(int i =0; i<length;i++){
		printf("the %d element address in memory : %p \n", i, &array[i]);
	}
	separator();
}
void separator(){
	printf("\n-----------------------------\n");
}
