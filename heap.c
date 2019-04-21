#include <stdio.h>
#include <stdlib.h>

/*
	heap ���ڴ����
	1. ��������
		���ڴ��ͷŲ���������������ָ������ͷţ���������ָ�뱻�޸Ĺ������׳��쳣
		���ڴ�����ָ�룬��Ӧ�ռ�Ӧ����ָ�������ֽ���Ŀ��������������int * ����ռ���4,8,12...
		���ڴ�����ռ�󣬲���ָ��Խ�磬������׳��쳣
		���ڴ治�ܶ���ͷ�
			�����Ҫ����ͷţ����ͷź��ָ����Ϊ��. free(p);p=NULL;free(p); 
		*****ͬ��ָ�룬����������ֵ����
		������ڱ����ú������޸��Լ���ָ���ַ�������ַ�ʽʵ��
			1. ��ָ����Ϊ�������룬��return
			2. ��ָ��ĵ�ַ��Ϊ�������룬����һ��ָ����գ���ʹ��*��һ��ָ����е�ַ�������ָ���ַ 
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
	int * intmemory = (int *)malloc(37); //��4��������
	intmemory = fillm(intmemory);
	intmemory = backp(intmemory); 
	iterator(intmemory);
	free(intmemory);
}
void test01(){
	//1. �����ڴ�
	int * intmemory = applym(); 
	printf("ָ����Ϊ�������ݣ����ú�������ǰ��ӡ: %p\n", intmemory);
	intmemory =  fillm(intmemory);
	printf("ָ����Ϊ�������ݣ����ú������ú��ӡ: %p\n", intmemory);
	intmemory = backp(intmemory); 
	iterator(intmemory);
	// ���ƶ����ָ�벻���ͷ� 
	//free(intmemory); //error
//	printf("memory: %p\n", intmemory);

//	intmemory-=NUM; 
//	printf("memory: %p\n", intmemory);
	free(intmemory); 
	//�ͷź��ָ��ΪҰָ�룬 ��ò�Ҫʹ��
//	printf("memory: %p\n", intmemory);
}
// ����ָ��
int * backp(int * pointer){
	pointer-=NUM;
	return pointer;
} 
// ���ռ� 
int * fillm(void * pointer){
	int * intmemory = (int*) pointer;
	printf("ָ����Ϊ�������ݣ������ú����д�ӡ��%p\n", intmemory);
	for(int i=0;i<NUM;i++){
		*intmemory++ =i;
	}
	return  intmemory;
}
// �����ռ� 
void iterator(void * pointer){
	int * intmemory = (int *)pointer;
	for(int i=0;i<NUM;i++){
		printf("�� %d ��Ԫ��Ϊ��%d\n", i, *(intmemory+i));
	}
}
//����ռ� 
int * applym(){
	int * intmemory = (int *)malloc(sizeof(int)*NUM); 
	if(!intmemory){ //����Ƿ����뵽�ڴ� 
		return 0;
	} 
	return intmemory;
} 

