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
	//1. 输入学生人数
	getStdNum();
	//2. 输入科目数
	getSubNum(); 
	//3. 申请空间
	//3.1 申请二级指针空间，学生数组
	int ** stds = (int **) malloc(sizeof(int)*stdnum); 
	//3.2 申请一级指针空间，每个学生科目成绩数组 
	for(int i=0; i<stdnum;i++){
		*(stds+i)=(int *)malloc(sizeof(int)*subnum);
	}
	printf("**************************************\n");
	printf("*************** scanf ****************\n");
	printf("**************************************\n\n");
	//4. 录入成绩
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
	// 5. 打印成绩
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
