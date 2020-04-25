#include<stdio.h>
#include<cstdlib>
int main()
{
	int n,b,s;
	int sushu(int x);
	printf("请输入一个正整数n：");
	scanf("%d",&n);
	b=sushu(n);
	if(b==0)
	{
		printf("%d不是素数！\n",n);
	}
	else if(b!=0 && b!=3)
	{
		printf("%d是素数！\n",n);
	}
	else if(b==3)
	{
		printf("%d既不是素数又不是合数！\n",n);
	}
	system("pause");
	return 0;
}

int sushu(int x)
{
	int i,s;
	if(x>1)
	{
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				s=0;
				break;
			}
	else if(x%i!=0)
			{
				s=1; 
				continue;
			}
		}
	}
	else if (x<=1)
	{	
		s=3;
	}
	return (s);
}
