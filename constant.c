#include <stdio.h>
/*
	����
	���壺�ڳ������й����У���ֵ���ܷ����ı���� 
	���巽ʽһ ������ȫ�� 
		const �������� �������� = ֵ
		ע������ʹ����һ��ָ���޸ĳ�����ֵ 
	���巽ʽ������ ��#define �������� �������� = ֵ�� 
*/ 
#define defineint 100
void main(){
	const int constint = 12;
	printf("the const is defined by const int number is : %d\n", constint);
	printf("the const is defined by define int number is : %d\n", defineint);
	
}
