#include <stdio.h>
/*
	1. ָ����������Ϊ����ָ���ƫ������ƫ������ָ�����ٸ�ָ�����ͣ�������int*���͵�ָ��p1-p2=10����ʾ���10��int�� 
	2. ָ�벻����ӣ�ָ�벻����ˣ�ָ�벻����� ��ָ�벻���໥ȡģ 
	2. ָ��+��������ָ������*������ƫ�ƣ�������������ƫ�ƣ���int arr[5]={0}; int *p = arr; p++; ����p++�Ľ����ȡ��һ����������Ԫ�� 
	4. ָ�벻�ܳ���������ָ�벻��ģ������ָ�벻��λ������ 
	3. ������Ϊ��������ʱ�����ݵ���ָ�룬���Բ����ٺ�����ʹ��sizeof(array)��ȡ����ռ�õ��ֽ���������Ϊarray��ָ��sizeof(array)��ȡ����ָ��ռ�õ��ֽ����� 
	4. ָ����ԱȽϴ�С��< >�ȣ��������߼����� (&&����||��)
*/

void iteratorByPointer(int array[], int length); 
void main(){
	
	int array[] = {0,1,2,3,4,5};
	int * p = array;
	int * q = &array[5];
	
	//ʹ��ָ��������� 
	iteratorByPointer(array, sizeof(array)/sizeof(array[0]));
	
	//ָ����� 
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
