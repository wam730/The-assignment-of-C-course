#include <stdio.h>
int main() 
{
	double a,b,c,d;
	printf("请输入任意带小数点的实数a\n");
	scanf("%lf",&a);
	printf("请输入任意带小数点的实数b\n");
	scanf("%lf",&b);
	printf("请输入任意带小数点的实数c\n");
	scanf("%lf",&c);
	printf("这三个实数为：\n %lf %lf %lf",a,b,c); 
	printf("\n三个数四舍五入求和后结果为：\n%.0f\n",d=(int)(a+b+c+0.5));
	system("pause");
	return 0;
	
	
}
