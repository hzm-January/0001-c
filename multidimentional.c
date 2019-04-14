#include <stdio.h>
/*
	two dimentional array 二维数组
	
	1. 定义
		数据类型 数组名 [行数][列数] = {
			{第一行第一列值， 第一行第二列值...},
			{第二行第一列值}
		} 
		注： 列数必须给出，行数可以由编译器判断
		注： 如果没有给出值，编译器会自动初始化为0
		
	2. 二维数组做参数
		必须给出列数，如果不给出，则抛出异常：[Error] array type has incomplete element type 
		
	3. 二维数组在内存中的存储
		二维数组元素连续存储，第二行第一列地址 - 第一行最后一列地址 = 一个元素大小 
	
	4. 二维数组行数和列数
		行数：sizeof(array)/sizeof(array[0])
		列数：sizeof(array[0])/sizeof(array[0][0])
		
	multi-dimentional array 多维数组
	
	1. 三维数组定义
		数据类型 数组名 [层][行][列] = {
			{ //第一层
				{
					{第一层第一行第一列，第一层第一行第二列......},
					{第一层第二行第一列，第一层第二行第二列......},
				}			
			},
			{ //第二层
				{
					{第二层第一行第一列，第二层第一行第二列......},
					{第二层第二行第一列，第二层第二行第二列......},
				}	
			},
		} 
					 
*/
void iteratorElement(int array[][2], int row, int column);
void iteratorAddress(int array[][2], int row, int column);
void main(){
	int array[2][2] = {
		{1,2},
		{3,4} 
	};
	int row = sizeof(array)/sizeof(array[0]);
	int column = sizeof(array[0])/sizeof(array[0][0]);
	 
	iteratorElement(array,row,column);
	iteratorAddress(array,row,column);
}
void iteratorAddress(int array[][2], int row, int column){
	for(int i =0;i<row;i++){
		for(int j=0;j<column;j++){
			printf(" the [%d][%d] element address is %p \n", i, j, &array[i][j]);
		}
	}
}
void iteratorElement(int array[][2], int row, int column){
	for(int i =0;i<row;i++){
		for(int j=0;j<column;j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	printf("--------------------------\n");
}
