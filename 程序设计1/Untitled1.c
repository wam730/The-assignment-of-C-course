#include<stdio.h>
#define PI 3.1415926
int main()
{
	double r,c,s;
	printf("请输入这个圆的半径：");
	scanf("%lf",&r);
	printf("这个圆的周长为=%lf\n",c=2.0*PI*r);
	printf("圆的面积为=%lf\n",s=PI*r*r);
	return 0;
 } 
