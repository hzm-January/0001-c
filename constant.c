#include <stdio.h>
/*
	����
	���壺�ڳ������й����У���ֵ���ܷ����ı���� 
	���巽ʽһ 
		const �������� �������� = ֵ
		ע������ʹ����һ��ָ���޸ĳ�����ֵ 
		
		const ����ľֲ�����ʱ����ȫ�ģ�����ͨ��ָ������޸� 
		const �����ȫ�ֱ����ǰ�ȫ�ģ��洢���ڴ��е����ݳ������������޸� 
	���巽ʽ������ ��#define �������� �������� = ֵ�� 
		�궨��ĳ����ǰ�ȫ�ġ� 
*/ 
#define defineint 100
void main(){
	const int constint = 12;
	printf("the const is defined by const int number is : %d\n", constint);
	printf("the const is defined by define int number is : %d\n", defineint);
	
}
