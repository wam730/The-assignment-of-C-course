#include<stdio.h>
void main()
{
	double a,b;
	char op;
	printf("请输入两个整数的运算式，以计算结果；\n");
	scanf("%lf%c%lf",&a,&op,&b);
	switch(op)
	{case'+':				printf("%lf+%lf=%lf",a,b,a+b);break; 
	case'-':				printf("%lf-%lf=%lf",a,b,a-b);break;
	case'*':				printf("%lf*%lf=%lf",a,b,a*b);break;
	case'/':	if(b==0)	printf("错误！除数不能为0！");
				else		printf("%lf/%lf=%lf",a,b,a/b);break;
	}
	system("pause");
	return 0;
}
