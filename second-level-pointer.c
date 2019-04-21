#include <stdio.h>
#include <stdlib.h>
int stdnum = 0;
int subnum = 0;
static void getStdNum();
static void getSubNum(); 
static void freeFP(int ** stds);
int main(int argc, char * argv []){
	printf("argc is %d\n", argc);
	printf("**************************************\n");
	printf("*************** start ****************\n");
	printf("**************************************\n\n");
	//1. ����ѧ������
	getStdNum();
	//2. �����Ŀ��
	getSubNum(); 
	//3. ����ռ�
	//3.1 �������ָ��ռ䣬ѧ������
	int ** stds = (int **) malloc(sizeof(int)*stdnum); 
	//3.2 ����һ��ָ��ռ䣬ÿ��ѧ����Ŀ�ɼ����� 
	for(int i=0; i<stdnum;i++){
		*(stds+i)=(int *)malloc(sizeof(int)*subnum);
	}
	printf("**************************************\n");
	printf("*************** scanf ****************\n");
	printf("**************************************\n\n");
	//4. ¼��ɼ�
	for(int i=0; i<stdnum;i++){
		printf("the number of student %d \n", i);
		for(int j=0; j<subnum;j++){
			printf("\t the %d subject scores is : ", j);
			scanf("%d", *(stds+i)+j);
		}
	}	
	printf("**************************************\n");
	printf("*************** print ****************\n");
	printf("**************************************\n\n");
	// 5. ��ӡ�ɼ�
	for(int i=0; i<stdnum;i++){
		printf("student number %d \n", i);
		for(int j=0; j<subnum;j++){
			printf("\t the %d subject scores is : %d\n", j, *(*(stds+i)+j));
		}
	}
	freeFP(stds);
	free(stds);
	printf("\n\n**************************************\n");
	printf("**************** end *****************\n");
	printf("**************************************\n");
}
static void freeFP(int ** stds){
	for(int i=0;i<stdnum;i++){
		free(*(stds+i));
	}
} 
static void getStdNum(){
	printf("student number : ");
	scanf(" %d", &stdnum); 
}
static void getSubNum(){
	printf("subject number : ");
	scanf(" %d", &subnum); 
}
