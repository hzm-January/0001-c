#include <stdio.h>
#include <string.h>
/*
	�ַ�������ϰ 
	1. ƴ���ַ��� 
	2. ��ȡ�ַ���
		2.1 gets(�ַ�����ַ); //�л���������� �������ַ������Խ��տո��൱��scanf("%[^\n]", chararray);
		2.2 fgets(�ַ�����ַ, �ַ�����С��FILEָ��); //�ӿ���̨������stdin 
	3. ��ӡ�ַ���
		2.1 puts(); // ���Զ����� 
		2.2 fputs(�ַ�����ַ��FILEָ��);  //�ӿ���̨�����stdout 
	4. �ַ�������
		strlen(�ַ�����ַ) //�����ַ������Ȳ�����β��'\0' 
*/
void concat(char stra[], char strb[], int lengtha, int lengthb);
void main(){
	
	//1. ƴ���ַ��� 
//	char stra[] = "hello";
//	char strb[] = "world";
//	int lengtha = sizeof(stra);
//	int lengthb = sizeof(strb);
//	concat(stra, strb, lengtha, lengthb); 
	
	//2. ��ȡ�ַ���
	char str1[10];
	printf("please input a string : ");
	gets(str1);
//	puts(str1);

//	fgets(str1, 10, stdin);
//	fputs(str1, stdout); 

	printf("string length : %d\n", strlen(str1)); 
	
}
void concat(char stra[], char strb[], int lengtha, int lengthb){
	char strc[lengtha+lengthb];
	// �ַ���ƴ��
	int i=0;
	int j=0; 
	for(;i<lengtha;i++){
		if(stra[i]!='\0'){
			strc[i]=stra[i];
		}
	} 
	for(;j<lengthb;j++){
		strc[j+i-1]=strb[j];
	}
	printf("concat \"%s\" and \"%s\" result string is \"%s\"\n", stra, strb, strc);	
}
