#include<stdio.h>
#include<cstdlib>
int main()
{
	double n,a=3.0,a1=1.0,a2=2.0,b1=2.0,b2=3.0,b=5.0,i=0,an,sn=0,sum;
	printf("下面将为您计算数列的前n项的和\n请输入n的值：");
	scanf("%lf",&n);
	if(n==1)				printf("数列的第1项和为：2.000000\n");
	else if(n==2)			printf("数列的前2项和为：3.500000\n");
	else if(n==3)			printf("数列的前3项和为：5.166666\n");
	else if(n>=4&&n<1476)	
							{printf("a1=2/1\na2=3/2\na3=5/3\n");
							while(i<n-3)																	/*思路：先定义分子与分母的前3项，然后依次把
																											每一项向后移动一位，得到分子分母后再相除*/
							{a1=a2;
							a2=a;
							a=a1+a2;																		//每一项的分子
							b1=b2;						
							b2=b;
							b=b1+b2;																		//每一项的分母
							an=b/a;																			//第n项
							sn=sn+an;																		//从第4项起的每一项的和
							printf("a%.0lf=%.0lf/%0.lf\n",i+4,b,a);
							i++;}
							printf("***   数列的前%0.0lf项和为:%lf   ***\n",n,sum=sn+(31.00/6.00));}		//前n项的和，n>=4的时候
	else if(n>=1476)		printf("数据过大！请重新输入！\n");	
	else					printf("输入错误，请检查！\n");
							printf("powered by Wang Yujie\nThank you for using\n");
	system ("pause");
	return 0;
}
