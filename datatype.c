#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h> 
/*
	c���Ի������� 
*/ 
void separator();
void main(void){
	//1. �ַ�����
	/*
		1. ��ʼ����ʽ��char chr = 0; char chr = NULL;(NULL�����д) 
		2. char ������Ϊ����ʹ�ã���%d��������
		3. char ������Ϊ�ַ�ʹ�ã���%c�������� 
		4. char ռ��1���ֽ� signed char (-127~128); unsigned char(0~255)
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
		C���Բ�û���ϸ�涨 short��int��long �ĳ��ȣ�ֻ���˿������ƣ�
		1. short ����ռ�� 2 ���ֽڡ�
		2. int ����Ϊһ�������ֳ���32 λ�����»����ֳ�Ϊ 4 �ֽڣ�64 λ�����»����ֳ�Ϊ 8 �ֽڡ�
		3. short �ĳ��Ȳ��ܴ��� int��long �ĳ��Ȳ���С�� int��
		�ܽ᣺2<=short<=int<=long
		�����ζ�ţ�short ����һ����ġ��̡���long Ҳ����һ����ġ������������п��ܺ� int ռ����ͬ���ֽ���
		
		4. ���������������
			%hd short int
			%hu unsigned short  
			%d : int
			%u ��unsigned 
			%ld: long
			%lu: unsigned long
			%lld: long long
			%llu: unsigned long long 
	*/
	
	//2. ������
	/*
		1.����Ϊ16λ 
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
	
	//3. ����
	/*
		1. �����ֳ�
	*/
//	printf("Int occupyies %d byte\n", sizeof(int)); 
//	if(sizeof(int)==4){
//		int in = 0;
//		printf("Please input a int(-2147483648��2147483647) to program: ");
//		scanf(" %d", &in);
//		printf("You input the int is %d\n", in); 
//		unsigned int unsignedint = 0;
//		printf("Please input a unsigned int(0��4294967295) to program: ");
//		scanf(" %d", &unsignedint);
//		printf("You input the unsigned int is %d\n", unsignedint);  
//	}else {
//		printf("int does not occupies 4 bytes");
//	}
//	
//	separator();
	
	//4. ������
	/*
		1. �����ֳ�
	*/
//	printf("long occupyies %d byte\n", sizeof(long)); 
//	printf("The max number of long  is %ld \n", LONG_MAX);
//	printf("The min number of long  is %ld \n", LONG_MIN);
//	printf("The max number of unsigned long  is %lu \n", ULONG_MAX);
//	if(sizeof(long)==4){
//		long lon = 0;
//		printf("Please input a long(-2147483648��2147483647) number to program: ");
//		scanf(" %ld", &lon);
//		printf("You input the long number is %d\n", lon); 
//		unsigned long unsignedlong = 0;
//		printf("Please input a unsigned long number (0��4294967295) to program: ");
//		scanf(" %lu", &unsignedlong);
//		printf("You input the unsigned long number is %lu\n", unsignedlong);  
//	}else {
//		printf("long does not occupies 4 bytes");
//	}
//	separator();

	//5. ������
//	printf("long long number occupyies %d byte\n", sizeof(long long)); 
//	printf("The max number of long long  is %lld \n", LLONG_MAX);
//	printf("The min number of long long  is %lld \n", LLONG_MIN);
//	printf("The max number of unsigned long long  is %llu \n", ULLONG_MAX);
//	if(sizeof(long long)==8){
//		long long longlong = 0;
//		printf("Please input a long long(-9223372036854775808��9223372036854775807) number to program: ");
//		scanf(" %lld", &longlong);
//		printf("You input the long long number is %lld\n", longlong); 
//		unsigned long long unsignedlonglong = 0;
//		printf("Please input a unsigned long long(0��18446744073709551615) number to program: ");
//		scanf(" %llu", &unsignedlonglong);
//		printf("You input the unsigned long long number is %llu\n", unsignedlonglong);  
//	}else {
//		printf("long long number does not occupies 8 bytes");
//	}
//	separator();

	//������
	/*
		1. ����������û�о��� 4.123+1.256 = 5.3790001869; ����ʹ��==�ж�4.123+1.256 = 5.379������ʹ��fabs(f2-f1)<1E-10 ��ľ���ֵ�뾫�ȱȽϴ�С 
	*/ 
//	float a = 4.123f;
//	float b = 1.256f;
//	float c = a+b;
//	printf("4.123+1.256 = %.10f\n", c);
	
	//6. �����ȸ�����
	/*
		1. ��Ч����Ϊ7λ
		2. ʹ��%f���룬ʹ��%f�����Ĭ���������뱣��С�����6λ����ʹ��%lf�������� 
	*/
//	printf("float number occupyies %d byte\n", sizeof(float)); 
//	printf("The max number of float is %f \n", FLT_MAX);
//	printf("The min number of float is %f \n", FLT_MIN);
//	if(sizeof(float)==4){
//		float flot = 0;
//		printf("Please input a float(����(1.2E-38 ~ 3.4E+38)����0����������������nan) number to program: ");
//		scanf(" %f", &flot);
//		printf("You input the float number is %f\n", flot); 
//		printf("You input the float number is %.10f\n", flot);  //����С�����10λ 
//	}else {
//		printf("float number does not occupies 8 bytes");
//	}
//	separator();
	
	//7. ˫���ȸ�����
	/*
		1. ��Ч����Ϊ15λ
		2. ʹ��%lf���룬ʹ��%f�����Ĭ���������뱣��С�����6λ����ʹ��%f�������� 
	*/
//	printf("float number occupyies %d byte\n", sizeof(double)); 
//	printf("The max number of double is %f \n", DBL_MAX);
//	printf("The min number of double is %f \n", DBL_MIN);
//	if(sizeof(double)==8){
//		double doub = 0;
//		printf("Please input a double(����(2.3E-308 ~ 1.7E+308)����0����������������nan) number to program: ");
//		scanf(" %lf", &doub);
//		printf("You input the double number is %f\n", doub); 
//		printf("You input the double number is %.20f\n", doub);  //����С�����10λ 
//	}else {
//		printf("double number does not occupies 8 bytes");
//	}
//	separator();

	
//	printf(" Expressing positive infinity with floating point numbers ��%f\n", +1.2/0.0); // ��������ʾ�������
//	printf(" Expressing negative infinity with floating point numbers ��%f\n", -1.2/0.0); // ��������ʾ�������
//	printf(" Expressing nan with floating point numbers ��%f\n", 0.0/0.0); //// ��������ʾnan 
//	separator();	
	
	//8. boolean ��������
	/*
		1. c�������ϸ�������û�в������ͣ�0��false����0��true 
		2. c����c99�ṩ��stdbool.h ����ʹ��bool���ͣ�ֵΪtrue��false��, printf �޷���ӡtrue��false����Ҫʹ��%d���boolean��ֵ
		3. boolռ��1�ֽ� 
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
