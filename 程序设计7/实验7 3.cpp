#include<stdio.h>
#include<cstdlib>
int main()
{
	int a;
	void yingwen(int x);
	printf("请输入月份的数字：\n");
	scanf("%d",&a);
	yingwen(a);

	system("pause");
	return 0;
}
void yingwen(int x)
{
	if(x==1)			printf("英文是：January\n");
	else if(x==2)		printf("英文是：February\n");
	else if(x==3)		printf("英文是：March\n");
	else if(x==4)		printf("英文是：April\n");
	else if(x==5)		printf("英文是：May\n");
	else if(x==6)		printf("英文是：June\n");
	else if(x==7)		printf("英文是：July\n");
	else if(x==8)		printf("英文是：August\n");
	else if(x==9)		printf("英文是：September\n");
	else if(x==10)		printf("英文是：October\n");
	else if(x==11)		printf("英文是：November\n");
	else if(x==12)		printf("英文是：December\n");
}