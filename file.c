#include <stdio.h>
/*
	�ļ�����
	1. ���ļ�fopen
		1.1 ���ļ�ʧ�ܵ����
			�Ҳ����ļ�
			�ļ�Ȩ�ޣ���ֹ��д��
			������ļ��������� ������Ϊ65535�� 
	2. �ر��ļ�fclose 
	3. ��ȡ�ļ�
		3.1 �ļ�ĩβ 
			�ı��ļ� Ĭ�Ͻ�βΪEOF(end of file)��EOF��һ���궨��ĳ��� #define EOF (-1) 
			�������ļ�  ʹ��int feof(FILE * stream)
		3.2 �����ַ���
			int fgetc(FILE * stream) 
	4. д�ļ�
		4.1 �����ַ�д
			int fputc(int ch, FILE * stream) 
*/

int main(int argv, char * argc[]){
	
	//1. ���ļ�
	FILE * fp = fopen("D:/c.txt", "r");
	if(!fp){
		printf("���ļ�ʧ��\n");
	} 
	//2. ���ļ�
//	char c;
//	while((c=fgetc(fp))!=EOF){
//		printf("%c",c);
//	} 
	//3. д���ļ������ļ�ʱ��Ҫʹ��"w" 
	char c = 'a';
	fputc(c,fp); 
	fclose(fp);
} 
