#include <stdio.h>
/*
	文件操作
	1. 打开文件fopen
		1.1 打开文件失败的情况
			找不到文件
			文件权限（禁止读写）
			程序打开文件超出上限 （上限为65535） 
	2. 关闭文件fclose 
	3. 读取文件
		3.1 文件末尾 
			文本文件 默认结尾为EOF(end of file)，EOF是一个宏定义的常量 #define EOF (-1) 
			二进制文件  使用int feof(FILE * stream)
		3.2 按照字符读
			int fgetc(FILE * stream) 
	4. 写文件
		4.1 按照字符写
			int fputc(int ch, FILE * stream) 
*/

int main(int argv, char * argc[]){
	
	//1. 打开文件
	FILE * fp = fopen("D:/c.txt", "r");
	if(!fp){
		printf("打开文件失败\n");
	} 
	//2. 读文件
//	char c;
//	while((c=fgetc(fp))!=EOF){
//		printf("%c",c);
//	} 
	//3. 写入文件，打开文件时需要使用"w" 
	char c = 'a';
	fputc(c,fp); 
	fclose(fp);
} 
