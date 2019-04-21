#include <stdio.h>
#include <string.h>
/*
	字符串的练习 
	1. 拼接字符串 
	2. 获取字符串
		2.1 gets(字符串地址); //有缓存溢出风险 ，接收字符串可以接收空格，相当于scanf("%[^\n]", chararray);
		2.2 fgets(字符串地址, 字符串大小，FILE指针); //从控制台输入是stdin 
	3. 打印字符串
		2.1 puts(); // 有自动换行 
		2.2 fputs(字符串地址，FILE指针);  //从控制台输出是stdout 
	4. 字符串长度
		strlen(字符串地址) //返回字符串长度不带结尾的'\0' 
*/
void concat(char stra[], char strb[], int lengtha, int lengthb);
void main(){
	
	//1. 拼接字符串 
//	char stra[] = "hello";
//	char strb[] = "world";
//	int lengtha = sizeof(stra);
//	int lengthb = sizeof(strb);
//	concat(stra, strb, lengtha, lengthb); 
	
	//2. 获取字符串
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
	// 字符串拼接
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
