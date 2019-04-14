#include <stdio.h>
/*
	two dimentional array ��ά����
	
	1. ����
		�������� ������ [����][����] = {
			{��һ�е�һ��ֵ�� ��һ�еڶ���ֵ...},
			{�ڶ��е�һ��ֵ}
		} 
		ע�� ����������������������ɱ������ж�
		ע�� ���û�и���ֵ�����������Զ���ʼ��Ϊ0
		
	2. ��ά����������
		���������������������������׳��쳣��[Error] array type has incomplete element type 
		
	3. ��ά�������ڴ��еĴ洢
		��ά����Ԫ�������洢���ڶ��е�һ�е�ַ - ��һ�����һ�е�ַ = һ��Ԫ�ش�С 
	
	4. ��ά��������������
		������sizeof(array)/sizeof(array[0])
		������sizeof(array[0])/sizeof(array[0][0])
		
	multi-dimentional array ��ά����
	
	1. ��ά���鶨��
		�������� ������ [��][��][��] = {
			{ //��һ��
				{
					{��һ���һ�е�һ�У���һ���һ�еڶ���......},
					{��һ��ڶ��е�һ�У���һ��ڶ��еڶ���......},
				}			
			},
			{ //�ڶ���
				{
					{�ڶ����һ�е�һ�У��ڶ����һ�еڶ���......},
					{�ڶ���ڶ��е�һ�У��ڶ���ڶ��еڶ���......},
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
