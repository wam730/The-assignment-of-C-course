#include<stdio.h>		
#include<cstdlib>
int sushu(int a);
int main()
{
	//素数，是除了1和它本身以外就没有其他约数的数；
	////所以判断是否是素数，可以用从2开始的数除以它，如果除得尽，则不是素数，一直除到前一个还没除尽，则为素数////
	int y;
	printf("请输入一个正整数： ");
	scanf("%d",&y);
	sushu(y);
	if(sushu(y)==0)					printf("\n %d 不是素数,是合数！\n",y);
	else if(sushu(y)==-1)			printf("\n %d 既不是素数也不是合数！\n",y);
	else if(sushu(y)==1)			printf("\n %d 是素数！\n");
	else
	system("pause");
	return 0;
}
int sushu(int a)
{
	int i,temp,x;
	if(a<=1)
	{
		x=-1;
	}
	else	
	{
		for(i=2;i<a;i++)
		{
			temp=a%i;
			if(temp==0) 
			{
				x=0;
				break;
			}
			else if(temp!=0)
			{
				x=1;
				continue;
			}	
		}
	}
	return x;
}
