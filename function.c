#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	function ����
	1. ��������
			ע����main�������ļ��У��������������������main����֮ǰ��������main�е��õ����� 
		 ����ֵ���� ������ (�����б�)
		 1.1 ������������.c�ļ��еĺ������ڵ�ǰ.c�ļ���ʹ�ã�����.c�ļ�����Ҫ���庯��������û��extern������ 
		 1.2 ����������ǰ.c�ļ��еĺ������ṩ����ǰ.c�ļ�ʹ�û�������.c�ļ����á���Ҳ������.h�ļ������� �� 
	2. ��������
		����ֵ���� ������ (�����б�) {ʵ��}
	 
	3. ��������
		* ͷ�ļ��� ����ָ����ͷ�ļ�
		* �������ƣ��������Ʊ����ͷ�ļ�����������һ��
		* ���ܣ��˽ⱻ���ú����Ĺ��ܲ��ܵ���
		* ��������������ƥ��
		* ����ֵ��������Ҫ���ܷ���ֵ
		 
	4. �����ж�
		4.1 �Ӻ����У������Ҫ�����Ӻ����������ص���������ʹ��return
		4.2 �Ӻ����У������Ҫ���Ƴ���ֱ���˳�������ʹ��exit(�쳣��) 
		
	5. ȫ�ֺ����;�̬����
		ȫ�ֺ�������C�����к���Ĭ�϶���ȫ�ֵ�
		��̬������ʹ�ùؼ���static���Խ���������Ϊ��̬
		��������Ϊstatic����ζ���������ֻ���ڶ�������������ļ���ʹ�ã�
		�������ļ��в��ܵ��ã���ʹ�������ļ����������������û�á�
		���ڲ�ͬ�ļ��е�staitc�������ֿ�����ͬ�� 
		
		
	 ����� 
	 time(time_t * t) // #include <time.h> ��ȡ��ǰϵͳʱ��
	 srand(unsigned int seed) //#include<stdlib.h> ����rand()���������ʱ�����ӣ����seed����ͬ��rand()�������������ͬ
	 rand(void) //#include <stdlib.h> ����һ�������ֵ
	  
*/
// ��������
//extern int sum(int a, int b); //����ʡ��a��b������ʡ��extern�ؼ��� 
int sum(int,int); // �򻯰����� 
void testReturn();
void testExit();
void main(){
	
	//1. ���Ժ������� 
//	printf(" 1+3 = %d\n", sum(1,3));
	
	//2. ���Ժ����ж�
//	testReturn();
//	printf("the log after test-return\n");
	testExit();
	printf("the log after test-exit\n");
	 
	//. ���������
//	srand((size_t)time(NULL));
//	for(int i=0;i<10;i++){
//		printf("50~120 : %d\n", rand()%50+70); 50-120 
//	} 
}
void testReturn(){
	printf("test return 1\n");
	printf("test return 2\n");
	return;
	printf("test return 3\n");
}
void testExit(){
	printf("test exit 1\n");
	printf("test exit 2\n");
	exit(404);
	printf("test exit 3\n");
}
int sum(int a, int b){
	return a+b;
} 
