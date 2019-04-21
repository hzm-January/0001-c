#include <stdio.h>
/*
	类型转换
	1.自动类型转换 
	char,short-signed int-unsigned int-long-float-double
	2. 强制类型转换
	注：强制类型转换，不会四舍五入，只是取出整数部分 
*/
void main(){
	long a = 2147483647;
	float b = a;
	printf("%f\n", b);
	long long aa = 2147483647;
	float bb = aa; 
	printf("%f\n", bb);
} 
