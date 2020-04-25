#include<stdio.h>
#define pi 3.1415926
int main()
{
	//斐波拉契数列的特点即后一项为前两项之和，所以定义了1,2,3项之后就可以依次递进求出每一项了
	//题中分数分子分母都是斐波拉契数列，只是第一项不同而已
	////sn=sn+an，别写错了////
	////n大于4时要记得把前面3项加回去
	////记住i从0开始，要小于n-3，因为前面3项已经是已知的，再算的话就多算了3项////
	float a=1,b=2,c=3;			//定义分母前三项；
	float x=2,y=3,z=5;			//定义分子前三项；
	float an,sn=0;				//前n项和；
	float temp,tmp,sum;			////没有必要，把b给a，c给b就好了，不用暂存
	int n,i=0;
	printf("请输入n值，求出前n项的和：");				//
	scanf("%d",&n);
	if(n==1)			printf("前n项和为：2.00\n");
	else if(n==2)		printf("前n项和为：3.50\n");
	else if(n==3)		printf("前n项和为：5.17\n");
	else if(n>=4)
	{
		for(i=0;i<n-3;i++)
		{
			b=a;
			c=b; 
			c=a+b;
			x=y;
			z=y;
			z=x+y;
			an=z/c;
			sn=sn+an;
		}
		printf("前n项和为：%.2f\n",sum=sn+(31.0/6.0));
	}
	else
	return 0;
}
