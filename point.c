#include <stdio.h>
/*
	ָ��
	
	1. ָ����ʲô
		ָ����һ�������ַ(�޷���16��������)�ı���
		
	2. ָ����ζ���
		��������* ָ���� = ��ַ����ͨ����ʼ��Ϊ0����NULL��0��ַ��ϵͳԤ�������Ŀ�ָ�룬���������ʲ����� 
		ע����������* ���Կ�����ָ������ 
		ע��ָ�����ͱ����Ӧָ���ַ���������ͣ������һ�£��磺char chr = 97; int *p = &chr; ʹ��*p��ȡֵ��ʱ��ȡ4���ֽڵĵ�ַ�ϵ�ֵ��������charһ���ֽڵ�ַ�ϵ�ֵ 
	3. ���ȡ��ָ��ָ���ַ������
		ʹ��ȡֵ����� *  
		
	4. ָ��ռ�ü����ֽ�
		ָ��ͻ����ֳ�����ϵͳ�йأ�32λ����ϵͳָ��ռ��32/8=4���ֽڣ�64λ����ϵͳָ��ռ��64/8=8���ֽ� 

	5. ���ͨ��һ��ָ���޸ı���ֵ
		*ָ���� = ��ֵ 
	
	6. *��&
		* ��ȡֵ���ţ���ά��
		& ��ȡ��ַ���ţ���ά�� 

	7. Ұָ��
		ָ��ָ��δ֪�ڴ�ռ�
		7.1 ���Ұָ��ָ��ĵ�ַ��0-255��ϵͳռ�ò��������ʲ���������*p����ʱ�ᱨ�� 
		7.2 ���Ұָ��ָ��ĵ�ַ����0-255���������ʲ�������*pȡֵ��ȡ��Ī�������ֵ 
	8. ��ָ��
		ָ���ַ0����NULL��ָ�룬��ָ�벻�������ʲ���
		8.1 ʹ�ó�����������Ϊ�����ж��Ƿ����뵽�ڴ�ռ�
	
	9. ����ָ��
		 ���Խ����������ͱ����ڴ��ַ��ָ��
		 ע��ͨ������ָ���޸ı����������ʱ������ת��Ϊ��Ӧ��ָ�����Ͳ��ܽ��в��� 
		 
	10. const
		const int * p; int const * p; //const����ָ�����ͣ�����ͨ��ָ���޸�ָ��ָ���ַ�ϵ�ֵ�������޸�ָ��ָ��ĵ�ַ
		int * const p; //const����ָ�룬 ��ͨ��ָ���޸�ָ��ָ���ַ�ϵ�ֵ���������޸�ָ��ָ��ĵ�ַ
		
	11. ����ָ��
		int ** p; 
		
		
*/
void main(){
	/*
		ָ��Ķ�����ʹ�� 
	*/ 
//	int a = 10;
//	int* p = &a;
//	printf("int value is %d \n", a);
//	printf("int address is %p \n", &a);
//	printf("point value is %p \n", p);
//	// ͨ��ָ���޸ı���ֵ
//	*p = 100;
//	printf("after modify...\n");
//	printf("int value is %d \n", a);
//	printf("int address is %p \n", &a);
//	printf("point value is %p \n", p);

	//Ұָ��Ϳ�ָ�� 
//	int* p = 0;
//	printf("%p\n", p); 
//	printf("%d|end\n", *p); //����δ��Ӧ�˳� 

	// ����ָ��
	int p = 12;
	void *q = &p;
	//*q = 122; //[Error] invalid use of void expression
	*(int*)q = 122;
	printf("%d\n", p); 
	
} 