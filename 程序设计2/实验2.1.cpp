#include <stdio.h>
#include<cstdlib>
#define PI 3.14
int main()
    {
	double r,h,s,v;
	printf("请输入圆柱体的底面半径：\n");	
	scanf("%lf",&r);
    printf("请输入圆柱体的高：\n");
    scanf("%lf",&h);
	printf("圆柱体的体积为：%lf\n",v=PI*r*r);
	system("pause");
	return 0;

	}
    
