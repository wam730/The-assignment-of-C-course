#include<stdio.h>
#include<cstdlib>
int main()
{	
	int bei,yue,a,b;
	int gongyueshu(int a,int b);
	int gongbeishu(int a,int b);
	printf("please input a & b:\n");
	scanf("%d %d",&a,&b);
	bei=gongbeishu(a,b);
	yue=gongyueshu(a,b);
	printf("The Least Common Multiple is %d\n",bei);
	printf("The Greatest Common Divisor is %d\n",yue);
	system("pause");
	return 0;
}	
	 int gongyueshu(int a,int b)
	{	
		int tmp;
		if(a<b)
		{
			tmp=a;
			a=b;
			b=tmp;
		}
		while(b!=0)
		{
			tmp=a%b;
			a=b;
			b=tmp;
		}
		return a;
		}
	int gongbeishu(int a,int b)
	{
		int x,y;
		y=a*b;
		int gongyueshu(int a,int b);
		x=gongyueshu(a,b);
		y=y/x;
		return(y);
		
	}