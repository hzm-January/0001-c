#include <stdio.h>
#include <stdlib.h>

/*
	
	�ַ�
	1. �ַ�����
		char ������ = ��ֵ(-128~127)���ַ�
		ע����Ҫ��ʼ�������û����Ҫ������ֵ����ʼ��Ϊ0����NULL
		1.1 �ַ����������
		��ʽһ��%c
		��ʽ����putchar() getchar(); 
		 
	�ַ�����
	1. �ַ����鶨��
		1.1 �ַ����鶨�巽ʽһ 
			char ������[Ԫ�ظ���]={'�ַ�1', '�ַ�2', .......} 
			���û�и�ֵ�����������ʼ��Ϊ0����NULL; 
		1.2 �ַ����鶨�巽ʽ��
		 	char ������[Ԫ�ظ���]="�ַ���"; 
			ע�� Ԫ�ظ������ַ������ַ�������ȣ���βû��\0���൱�ڽ��ַ���ת��Ϊ��ʽһ�е��ַ�������д洢 
	
	
	�ַ���
	ע��C���Ե��ַ�����β��ʶΪ'\0' 
	1. �ַ�������
	
		ʹ���ַ����鶨���ַ���
		ע������ַ������βû��'\0'��ֻ����Ϊ��һ���ַ����飬�������ַ��� 
		ע���ַ����鶨����ַ����������ʱ�����ʹ��%ns���������ַ�������n=�ַ�����+1 
		
		1.1 ���巽ʽһ�� 
			char ������[Ԫ�ظ���n+1]={'�ַ�1',....'�ַ�n'}; Ԫ�ظ�����ʡ�ԣ��ɱ������ж� 
			ע�� ��Ϊ���Ԥ����һ��λ�ã�c���������Զ�ʹ��0��ȫ���飬0��'\0'��һ���ģ��������ֶ����ַ����ķ�ʽ��ȷ
			ע�� 0��'\0'��ȣ�����0!='0' 
		1.2 ���巽ʽ����
			char ������[Ԫ�ظ���]={'�ַ�1',......,'\0'}; Ԫ�ظ�����ʡ�ԣ��ɱ������ж�
			ע�� ��β������'\0' 
		1.3 ���巽ʽ��
			char ������[Ԫ�ظ���+1]={"�ַ���"}��ͨ��ʡ������	char ������[Ԫ�ظ���+1]="�ַ���"�� 
			ע��Ԫ�ظ�����ʡ�ԣ��ɱ������ж�
		char * string = "";
			
*/ 
void iterator(char array [], int length); 
void main(){
	//1. �ַ����壬��ʼ��Ϊ0����NULL 
//	char zero = 0;
//	char cNULL = NULL;
	//char cnull = null; //[Error] 'null' undeclared (first use in this function)
//	printf("zero is : %c|end\n", zero);
//	printf("NULL is : %c|end\n", cNULL);

	/*
		2. �ַ����鶨��
	*/
	
	
	//2.1 ���巽ʽһ 
//	char array[5]={'a'};
//	iterator(array, sizeof(array));
	
	
	//2.2 ���巽ʽ��
//	char array2[5]="hello";
//	iterator(array2, sizeof(array2));

	
	/*
		3. �ַ�������
	*/
	
	//3.1 ��ʽһ��char����
//	char array3[]={'h','e','l','l','o','\0'};
//	iterator(array3, sizeof(array3));

	//3.2 ��ʽ����char����
//	char array5[6]={'h','e','l','l','o'};
//	iterator(array5, sizeof(array5));

	//3.3 ��ʽ����char����
//	char array4[]={"hello"};
//	char array4[]="hello";
//	iterator(array4, sizeof(array4));
	
	
	//3.3 ��ʽ�ģ�ָ��
//	char * str = "hello";
	
	//������һ���������ɱ����¸�ֵ
//	char arr[10];
//	arr = "ads"; //	[Error] assignment to expression with array type
	char * arr = (char *) malloc(sizeof(char)*12);
	printf("%s\n", *arr);
	*arr = "zhangsan";
	printf("1\n");
	printf("%s\n", *arr);
	*arr = "shai";
	printf("2\n");
	printf("%s\n", *arr);
	printf("3");
	free(arr); 
} 

void iterator(char array[], int length){
	printf("char array length is %d\n", length);
	printf("all element of char array is:");
	for(int i=0;i<length;i++){
		printf("%c",array[i]);
	}
	printf("|end\n");
	printf("---------------------------\n");
}
