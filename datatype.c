#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h> 
/*
	c语言基本类型 
*/ 
void separator();
void main(void){
	//1. 字符类型
	/*
		1. 初始化方式：char chr = 0; char chr = NULL;(NULL必须大写) 
		2. char 可以作为整数使用，用%d输入和输出
		3. char 可以作为字符使用，用%c输入和输出 
		4. char 占用1个字节 signed char (-127~128); unsigned char(0~255)
	*/
//	printf("Char occupyies %d byte\n", sizeof(char)); 
//	char chrnum = 0;  
//	printf("Please input a char(-127~128) to program as a number: ");
//	scanf("%d", &chrnum);
//	printf("You input the char output to number is %d\n", chrnum); 
//	printf("You input the char output to char is %c\n", chrnum); 
//	char chrchar = 0;
//	printf("Please input a char(-127~128) to program as a character: ");
//	scanf(" %c", &chrchar);
//	printf("You input the char output to char is %c\n", chrchar); 
//	printf("You input the char output to number is %d\n", chrchar); 
//	unsigned char unsignedchr = 0;
//	printf("Please input a unsigned char(0~255) to program as a number: ");
//	scanf(" %d", &unsignedchr);
//	printf("You input the unsigned char output to number is %d\n", unsignedchr); 
//	printf("You input the unsigned char output to char is %c\n", unsignedchr); 

//	separator();

	/*
		C语言并没有严格规定 short、int、long 的长度，只做了宽泛的限制：
		1. short 至少占用 2 个字节。
		2. int 建议为一个机器字长。32 位环境下机器字长为 4 字节，64 位环境下机器字长为 8 字节。
		3. short 的长度不能大于 int，long 的长度不能小于 int。
		总结：2<=short<=int<=long
		这就意味着，short 并不一定真的”短“，long 也并不一定真的”长“，它们有可能和 int 占用相同的字节数
		
		4. 整数的输出和输入
			%hd short int
			%hu unsigned short  
			%d : int
			%u ：unsigned 
			%ld: long
			%lu: unsigned long
			%lld: long long
			%llu: unsigned long long 
	*/
	
	//2. 短整型
	/*
		1.至少为16位 
	*/
//	printf("Short occupies %d byte\n", sizeof(short)); 
//	if(sizeof(short)==2){
//		short shrt = 0;
//		printf("Please input a short(-32768~32767) to program: ");
//		scanf(" %hd", &shrt);
//		printf("You input the short is %hd\n", shrt); 
//		unsigned short unsignedshort = 0;
//		printf("Please input a unsigned short(0~65535) to program: ");
//		scanf(" %hd", &unsignedshort);
//		printf("You input the unsigned short is %hd\n", unsignedshort); 
//	} else{
//		printf("short does not occupies 2 bytes");
//	}
	

//	separator();	
	
	//3. 整型
	/*
		1. 机器字长
	*/
//	printf("Int occupyies %d byte\n", sizeof(int)); 
//	if(sizeof(int)==4){
//		int in = 0;
//		printf("Please input a int(-2147483648～2147483647) to program: ");
//		scanf(" %d", &in);
//		printf("You input the int is %d\n", in); 
//		unsigned int unsignedint = 0;
//		printf("Please input a unsigned int(0～4294967295) to program: ");
//		scanf(" %d", &unsignedint);
//		printf("You input the unsigned int is %d\n", unsignedint);  
//	}else {
//		printf("int does not occupies 4 bytes");
//	}
//	
//	separator();
	
	//4. 长整型
	/*
		1. 机器字长
	*/
//	printf("long occupyies %d byte\n", sizeof(long)); 
//	printf("The max number of long  is %ld \n", LONG_MAX);
//	printf("The min number of long  is %ld \n", LONG_MIN);
//	printf("The max number of unsigned long  is %lu \n", ULONG_MAX);
//	if(sizeof(long)==4){
//		long lon = 0;
//		printf("Please input a long(-2147483648～2147483647) number to program: ");
//		scanf(" %ld", &lon);
//		printf("You input the long number is %d\n", lon); 
//		unsigned long unsignedlong = 0;
//		printf("Please input a unsigned long number (0～4294967295) to program: ");
//		scanf(" %lu", &unsignedlong);
//		printf("You input the unsigned long number is %lu\n", unsignedlong);  
//	}else {
//		printf("long does not occupies 4 bytes");
//	}
//	separator();

	//5. 长整型
//	printf("long long number occupyies %d byte\n", sizeof(long long)); 
//	printf("The max number of long long  is %lld \n", LLONG_MAX);
//	printf("The min number of long long  is %lld \n", LLONG_MIN);
//	printf("The max number of unsigned long long  is %llu \n", ULLONG_MAX);
//	if(sizeof(long long)==8){
//		long long longlong = 0;
//		printf("Please input a long long(-9223372036854775808～9223372036854775807) number to program: ");
//		scanf(" %lld", &longlong);
//		printf("You input the long long number is %lld\n", longlong); 
//		unsigned long long unsignedlonglong = 0;
//		printf("Please input a unsigned long long(0～18446744073709551615) number to program: ");
//		scanf(" %llu", &unsignedlonglong);
//		printf("You input the unsigned long long number is %llu\n", unsignedlonglong);  
//	}else {
//		printf("long long number does not occupies 8 bytes");
//	}
//	separator();

	//浮点数
	/*
		1. 浮点数计算没有精度 4.123+1.256 = 5.3790001869; 不能使用==判断4.123+1.256 = 5.379。可以使用fabs(f2-f1)<1E-10 差的绝对值与精度比较大小 
	*/ 
//	float a = 4.123f;
//	float b = 1.256f;
//	float c = a+b;
//	printf("4.123+1.256 = %.10f\n", c);
	
	//6. 单精度浮点数
	/*
		1. 有效数字为7位
		2. 使用%f输入，使用%f输出（默认四舍五入保留小数点后6位）；使用%lf输入会出错 
	*/
//	printf("float number occupyies %d byte\n", sizeof(float)); 
//	printf("The max number of float is %f \n", FLT_MAX);
//	printf("The min number of float is %f \n", FLT_MIN);
//	if(sizeof(float)==4){
//		float flot = 0;
//		printf("Please input a float(正负(1.2E-38 ~ 3.4E+38)或者0或者正负无穷大或者nan) number to program: ");
//		scanf(" %f", &flot);
//		printf("You input the float number is %f\n", flot); 
//		printf("You input the float number is %.10f\n", flot);  //保留小数点后10位 
//	}else {
//		printf("float number does not occupies 8 bytes");
//	}
//	separator();
	
	//7. 双精度浮点数
	/*
		1. 有效数字为15位
		2. 使用%lf输入，使用%f输出（默认四舍五入保留小数点后6位）；使用%f输入会出错 
	*/
//	printf("float number occupyies %d byte\n", sizeof(double)); 
//	printf("The max number of double is %f \n", DBL_MAX);
//	printf("The min number of double is %f \n", DBL_MIN);
//	if(sizeof(double)==8){
//		double doub = 0;
//		printf("Please input a double(正负(2.3E-308 ~ 1.7E+308)或者0或者正负无穷大或者nan) number to program: ");
//		scanf(" %lf", &doub);
//		printf("You input the double number is %f\n", doub); 
//		printf("You input the double number is %.20f\n", doub);  //保留小数点后10位 
//	}else {
//		printf("double number does not occupies 8 bytes");
//	}
//	separator();

	
//	printf(" Expressing positive infinity with floating point numbers ：%f\n", +1.2/0.0); // 浮点数表示正无穷大
//	printf(" Expressing negative infinity with floating point numbers ：%f\n", -1.2/0.0); // 浮点数表示负无穷大
//	printf(" Expressing nan with floating point numbers ：%f\n", 0.0/0.0); //// 浮点数表示nan 
//	separator();	
	
	//8. boolean 布尔类型
	/*
		1. c语言中严格意义上没有布尔类型，0是false，非0是true 
		2. c语言c99提供了stdbool.h 可以使用bool类型（值为true和false）, printf 无法打印true和false，需要使用%d输出boolean的值
		3. bool占用1字节 
	*/ 
//	int boo = 0;
//	printf("Please input a number : ");
//	scanf("%d", &boo);
//	if(boo){
//		printf(" true -- the number of you input is : %d\n", boo);
//	}else{
//		printf(" false -- the number of you input is : %d\n", boo);
//	}
//	separator();
	printf("bool occupyies %d byte\n", sizeof(bool));
	bool trueflag = true;
	bool falseflag = false;
	printf("the true value of boolean in <stdbool.h> is %d\n", trueflag);
	printf("the false value of boolean in <stdbool.h> is %d\n", falseflag);
	
}

void separator(){
	printf("------------------------------------------------\n");
}  
