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
	
	//1. 测试结构体
//	testStruct(); 
	//2. 测试结构体数组 
//	testStructArray();
	//3. 测试堆中的结构体
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
		printf("编号：%d\n", std[i].num);
		printf("姓名：%s\n", (&std[i])->name);
		printf("年龄：%d\n", std[i].age);
		printf("性别：%s\n", std[i].gender==1?"男":"女");
		printf("地址：%s\n", std[i].address);
	}
	free(std); 
}
void testStruct(){
	struct student std={10001, "张三", 12, 1, "San Francisco"};
	printf("编号：%d\n", std.num);
//	printf("姓名：%s\n", std.name);
	printf("姓名：%s\n", (&std)->name);
	printf("年龄：%d\n", std.age);
	printf("性别：%s\n", std.gender==1?"男":"女");
	printf("地址：%s\n", std.address);
}
void testStructArray(){
	struct student std[NUM]={
		{1,"hzm",12,1,"河南"},
		{2,"zxy",12,1,"山西"},
	};
	printf("结构体数组大小：%d\n", sizeof(std));
	printf("结构体大小：%d\n", sizeof(std[0]));
	printf("结构体数组元素个数：%d\n", sizeof(std)/sizeof(std[0]));
	for(int i=0; i<NUM; i++){
		printf("编号：%d\n", std[i].num);
		printf("姓名：%s\n", (&std[i])->name);
		printf("年龄：%d\n", std[i].age);
		printf("性别：%s\n", std[i].gender==1?"男":"女");
		printf("地址：%s\n", std[i].address);
		printf("--------------------------------\n");
	}
}
