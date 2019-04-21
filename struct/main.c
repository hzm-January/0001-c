#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define NUM 3
void testStructArray();
void testStructArrayInMemory();
void testStruct();
int main(int argc, char *argv[]) {
	
	//1. ���Խṹ��
//	testStruct(); 
	//2. ���Խṹ������ 
//	testStructArray();
	//3. ���Զ��еĽṹ��
//	testStructArrayInMemory(); 
	return 0;
}
void testStructArrayInMemory(){
	struct student * std = (struct student *) malloc(sizeof(struct student)*3);
	std[0].num = 110;
	strcpy(std[0].name, "zhangsan");
	std[1].age = 12;
	strcpy(std[2].address, "sh");
	for(int i=0; i<3; i++){
		printf("��ţ�%d\n", std[i].num);
		printf("������%s\n", (&std[i])->name);
		printf("���䣺%d\n", std[i].age);
		printf("�Ա�%s\n", std[i].gender==1?"��":"Ů");
		printf("��ַ��%s\n", std[i].address);
	}
	free(std); 
}
void testStruct(){
	struct student std={10001, "����", 12, 1, "San Francisco"};
	printf("��ţ�%d\n", std.num);
//	printf("������%s\n", std.name);
	printf("������%s\n", (&std)->name);
	printf("���䣺%d\n", std.age);
	printf("�Ա�%s\n", std.gender==1?"��":"Ů");
	printf("��ַ��%s\n", std.address);
}
void testStructArray(){
	struct student std[NUM]={
		{1,"hzm",12,1,"����"},
		{2,"zxy",12,1,"ɽ��"},
	};
	printf("�ṹ�������С��%d\n", sizeof(std));
	printf("�ṹ���С��%d\n", sizeof(std[0]));
	printf("�ṹ������Ԫ�ظ�����%d\n", sizeof(std)/sizeof(std[0]));
	for(int i=0; i<NUM; i++){
		printf("��ţ�%d\n", std[i].num);
		printf("������%s\n", (&std[i])->name);
		printf("���䣺%d\n", std[i].age);
		printf("�Ա�%s\n", std[i].gender==1?"��":"Ů");
		printf("��ַ��%s\n", std[i].address);
		printf("--------------------------------\n");
	}
}
