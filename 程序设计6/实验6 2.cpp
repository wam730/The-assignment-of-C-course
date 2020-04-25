#include<stdio.h>
#include<math.h>
#include<cstdlib>
int a,b,c;
int del;
double x1,x2,x;

void dayu(int a,int b,int c)
{
	x1=(-b+sqrt(del))/(2*a);
	x2=(-b-sqrt(del))/(2*a);
}

void dengyu(int a,int b,int c)
{
	x=-b/(2*a);
}

void xiaoyu(int a,int b,int c)
{
	x1=(-b+sqrt(-del))/(2*a);
	x2=(-b-sqrt(-del))/(2*a);
	printf("没有实数根！虚数根为：\n");
}

int main()
{
	printf("Please input a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	del=b*b-4*a*c;
	if(del>0)
	{
		dayu(a,b,c);
		printf("有两个不等实数根为\nx1=%lf,x2=%lf\n",x1,x2);
	}
	else if(del==0)
	{
		dengyu(a,b,c);
		printf("有两相等实数根为：\nx1=x2=%lf\n",x);
	}
	else
	{
		xiaoyu(a,b,c);
		printf("x1=%lfi x2=%lfi\n",x1,x2);
	}
	system("pause");
	return 0;
} 