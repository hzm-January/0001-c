#include <stdio.h>
/*
	ָ������
	1. ָ������ ����
		ָ������ ��������[Ԫ�ظ���]={��ַ1, ��ַ2......}; 
	2. ָ�������Ԫ�ظ���
		sizeof(arr)/sizeof(arr[0]) 
	
*/
void iteratorAddress(int * arr[], int length);
void iteratorValueByPointer(int * arr[], int length, int pVLength); 
void main(){
	int a[] = {1,2,3};
	int b[] = {4,5,6};
	int c[] = {7,8,9};
	int * arr[3] = {a,b,c};	
	int arrlength = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(arr[0]));
	printf("%p\n", a);
	printf("%p\n", arr[0]); // arr[0]��a��ַ��ͬ������sizeof(arr[0])==8 ������sizeof(a); 
	int pVLength = sizeof(a)/sizeof(*arr[0]);
//	iteratorAddress(arr, arrlength);
	iteratorValueByPointer(arr, arrlength, pVLength);
	
} 
void iteratorAddress(int * arr[], int length){
	for(int i=0;i<length;i++){
		printf("%p\n", arr[i]);
	}
}
void iteratorValueByPointer(int * arr[], int length, int pVLength){
	for(int i=0; i<length;i++){
		for(int j=0; j<pVLength; j++){
//			printf("%d ", *(arr[i]+j));
//			printf("%d ", arr[i][j]);
//			printf("%d ", *(*(arr+i)+j));
		}
		printf("\n");
	}
} 
