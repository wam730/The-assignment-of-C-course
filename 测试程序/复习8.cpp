#include<stdio.h>
#include<cstdlib>
int main()
{
	double a,b;
	char op;
	printf("请输入两个整数的运算式，以计算结果；\n");
	scanf("%lf%c%lf",&a,&op,&b);
	switch(op)
	{
	case'+':				printf("%.0lf+%.0lf=%.1lf\n",a,b,a+b);break; 
	case'-':				printf("%.0lf-%.0lf=%.1lf\n",a,b,a-b);break;
	case'*':				printf("%.0lf*%.0lf=%.1lf\n",a,b,a*b);break;
	case'/':	if(b==0)	printf("错误！除数不能为0！\n");
				else		printf("%.0lf/%.0lf=%.1lf",a,b,a/b);  break;
	default:				printf("error ! \n");				  break;
	}
	system("pause");
	return 0;
}
