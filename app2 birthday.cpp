#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int year,month,date;
	printf("請輸入出生年月日\n");
	printf("年:");
	scanf("%d",&year);
	printf("月:");
	scanf("%d",&month); 
	printf("日:");
	scanf("%d",&date); 
	printf("你的出生年月日為:%d年%d月%d日",year,month,date);
	system("pause");
}	
