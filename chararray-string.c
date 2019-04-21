#include <stdio.h>
#include <stdlib.h>

/*
	
	字符
	1. 字符定义
		char 变量名 = 数值(-128~127)或字符
		注：需要初始化，如果没有需要给定的值，初始化为0或者NULL
		1.1 字符的输入输出
		方式一：%c
		方式二：putchar() getchar(); 
		 
	字符数组
	1. 字符数组定义
		1.1 字符数组定义方式一 
			char 数组名[元素个数]={'字符1', '字符2', .......} 
			如果没有赋值，编译器会初始化为0或者NULL; 
		1.2 字符数组定义方式二
		 	char 数组名[元素个数]="字符串"; 
			注： 元素个数和字符串中字符个数相等，结尾没有\0，相当于将字符串转换为方式一中的字符数组进行存储 
	
	
	字符串
	注：C语言的字符串结尾标识为'\0' 
	1. 字符串定义
	
		使用字符数组定义字符串
		注：如果字符数组结尾没有'\0'，只能认为是一个字符数组，并不是字符串 
		注：字符数组定义的字符串，输入的时候可以使用%ns限制输入字符数量，n=字符数量+1 
		
		1.1 定义方式一： 
			char 变量名[元素个数n+1]={'字符1',....'字符n'}; 元素个数可省略，由编译器判断 
			注： 因为最后预留了一个位置，c编译器会自动使用0补全数组，0跟'\0'是一样的，所以这种定义字符串的方式正确
			注： 0和'\0'相等，但是0!='0' 
		1.2 定义方式二：
			char 变量名[元素个数]={'字符1',......,'\0'}; 元素个数可省略，由编译器判断
			注： 结尾必须有'\0' 
		1.3 定义方式三
			char 变量名[元素个数+1]={"字符串"}；通常省略括号	char 变量名[元素个数+1]="字符串"； 
			注：元素个数可省略，由编译器判断
		char * string = "";
			
*/ 
void iterator(char array [], int length); 
void main(){
	//1. 字符定义，初始化为0或者NULL 
//	char zero = 0;
//	char cNULL = NULL;
	//char cnull = null; //[Error] 'null' undeclared (first use in this function)
//	printf("zero is : %c|end\n", zero);
//	printf("NULL is : %c|end\n", cNULL);

	/*
		2. 字符数组定义
	*/
	
	
	//2.1 定义方式一 
//	char array[5]={'a'};
//	iterator(array, sizeof(array));
	
	
	//2.2 定义方式二
//	char array2[5]="hello";
//	iterator(array2, sizeof(array2));

	
	/*
		3. 字符串定义
	*/
	
	//3.1 方式一：char数组
//	char array3[]={'h','e','l','l','o','\0'};
//	iterator(array3, sizeof(array3));

	//3.2 方式二：char数组
//	char array5[6]={'h','e','l','l','o'};
//	iterator(array5, sizeof(array5));

	//3.3 方式二：char数组
//	char array4[]={"hello"};
//	char array4[]="hello";
//	iterator(array4, sizeof(array4));
	
	
	//3.3 方式四：指针
//	char * str = "hello";
	
	//数组是一个常量不可被重新赋值
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
