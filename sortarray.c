#include <stdio.h>
/*
	Êý×éÅÅÐò
	1. bubble sort
	2. selection sort
	3. insertion sort
*/
void iterator(int array[], int length, char flag);
void bubbleSort(int array[], int length); 
void selectionSort(int array[], int length); 
void insertSort(int array[], int length); 
void main(){
	int array[10]={5,6,4,7,8,1,3,0,2,9};
	int length = sizeof(array)/sizeof(array[0]);
	iterator(array, length, 0);
	//1. bubble sort
//	bubbleSort(array, length);

	
	//2. selection sort
//	selectionSort(array, length);	

	//3. insertion sort
//	insertSort(array, length);
	 
	iterator(array, length, 1);
}
void insertSort(int array[], int length){
	for(int i=1;i<length;i++){
		int temp = array[i];
		int j=i-1; 
		for(; j>=0; j--){
			if(array[j]>temp){
				array[j+1]=array[j];
			}else{
				break;
			}
		}
		array[j+1]=temp;
		
	}
}
void selectionSort(int array[], int length){
	for(int i=0;i<length;i++){
		int minIndex = i;
		for(int j=i+1;j<length;j++){
			if(array[minIndex]>array[j]){
				minIndex = j;
			}
		}
		if(minIndex!=i){
			int temp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = temp;
		}
	}
}
void bubbleSort(int array[], int length){
	for(int i=0;i<length-1;i++){
		char flag = 0;
		for(int j=i+1;j<length;j++){
			if(array[i]>array[j]){
				int temp = array[i];
				array[i]=array[j];
				array[j] = temp;
				flag = 1;
			}
		}
		if(!flag){
			return;
		}
	}
}
void iterator(int array[], int length, char flag){
	if(flag) 
		printf("after  : ");
	else 
		printf("before : ");
	for(int i=0; i<length; i++){
		printf("%d ",array[i]); 
	} 
	printf("\n"); 
}
