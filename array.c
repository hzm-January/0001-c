#include <stdio.h>
/*
	һά����
	
	1. ���鶨��
		�������� ��������� [Ԫ�ظ���] = {ֵ1��ֵ2��.....}; 
		�������� ��������� [�洢Ԫ�ظ����ı���] = {ֵ1��ֵ2��.....}; (c99�Ժ�) 
	ע��c99 ֮ǰԪ�����������Ǳ���ʱ��ȷ������������c99 ֮��Ԫ����������ʹ�ñ������� 
	ע�����鶨��󣬱����ʼ�������ʹ�� 
	
	2. ��ʼ��
		2.1 �������� ��������� [Ԫ�ظ���] = {ֵ1��ֵ2��.....}; 
		2.2 �������� ��������� [Ԫ�ظ���] = {ֵ1}; // ���Ԫ�ظ���>1�����µ�Ԫ�ر���ʼ��Ϊ0 
		2.3 �������� ��������� [Ԫ�ظ���] = {[ָ������1]=ֵ1,[ָ������2]=ֵ2}; // ����ָ�����������µ�Ԫ�ر���ʼ��Ϊ0 
		2.4 �������� ��������� [] = {ֵ1��ֵ2��.....}; 
			����Ԫ�ظ����� ������ �жϵó�
	3. ����Ԫ��
		���������[����]
	4. Ԫ�����ڴ��еĴ洢λ��
		4.1 �������ڴ���������ͬ���͵ı����ռ䣬��СΪԪ�ظ���*Ԫ�����ʹ�С 
		4.2 ����Ҫ������Ԫ������һ��
	5. ��������һ��ָ�������׵�ַ�ĳ���const���͵�ָ�룬�����޸�ָ���������鲻���໥��ֵ
	6. �����±�Խ��
		6.1 �����±�����ʹ�ø�����������Խ���һ�� 
		6.2 �±�Խ��������ʱ�쳣 
		6.3 ��������±�Խ�磬����ʵ��ڴ�����Ӧ�ĵ�ַ�������ַ������ʻ��ӡĪ����������ݣ������ַ��������ʻᱨ����ʱ�쳣
		 
	 
*/
#define ARRAY_LENGTH 10
void iterator();
void separator();
void elementAddress();
void main()
{
	// 1.�������ʼ�� 
//	int array[4] = {1,2,3,4};	
//	iterator(array, sizeof(array)/sizeof(array[0]));
//	int array2[] = {1,2,3};
//	iterator(array2, sizeof(array2)/sizeof(array2[0]));
//	int array3[ARRAY_LENGTH] = {[1]=1,[3]=3};
//	iterator(array3, sizeof(array3)/sizeof(array3[0]));
//	int array4[4] = {1};	
//	iterator(array4, sizeof(array4)/sizeof(array4[0]));
	// ʹ�ñ������������С 
//	int arrayLength = 10;
//	//int array6[arrayLength]={1}; //[Error] variable-sized object may not be initializedʹ�ñ����������鳤�ȵ����飬������ͬʱ��ʼ�� 
//	int array6[arrayLength]; //�ڴ��д���֮�����һһ��ֵ�����ֻ�ǲ��ָ�ֵ����ô����δ��ֵλ�õ�Ԫ�ػ����Ī����������� 
//	array6[0]=12;
//	iterator(array6, sizeof(array6)/sizeof(array6[0])); //12 0 4199831 0 8 0 4203921 0 4202912 0
	
	 
	// 2.���ڴ��еĴ洢�ʹ�С
//	int arrayInMemory [4] = {1,2,3,4};
//	elementAddress(arrayInMemory, sizeof(arrayInMemory)/sizeof(arrayInMemory[0]));
//	printf("the array size in memory is %d \n", sizeof(arrayInMemory));
//	printf("a element size of the array in memory is %d \n", sizeof(arrayInMemory[0]));
//	printf("the array length is %d\n", sizeof(arrayInMemory)/sizeof(arrayInMemory[0]));

	// 3. �����������һ����ַ���� 
//	int arrayIsConst[2] ={1}; 
//	printf("the array variable is %p\n", arrayIsConst);
	//int arrayIsConst2[2]={1};
	// arrayIsConst = arrayIsConst2;  // [Error] assignment to expression with array type
	
	
	// 4. �û�ָ�����鳤��
//	int length = 10;
//	printf("Please input the length : ");
//	scanf("%d", &length);
//	//int array[length]={0}; //error [Error] variable-sized object may not be initialized ʹ�ñ����������鳤�ȵ����飬������ͬʱ��ʼ�� 
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
	
	 //5. ��������
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
