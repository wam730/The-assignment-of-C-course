#include<stdio.h>
void main()
{
	double a,b;
	char op;
	printf("��������������������ʽ���Լ�������\n");
	scanf("%lf%c%lf",&a,&op,&b);
	switch(op)
	{case'+':				printf("%lf+%lf=%lf",a,b,a+b);break; 
	case'-':				printf("%lf-%lf=%lf",a,b,a-b);break;
	case'*':				printf("%lf*%lf=%lf",a,b,a*b);break;
	case'/':	if(b==0)	printf("���󣡳�������Ϊ0��");
				else		printf("%lf/%lf=%lf",a,b,a/b);break;
	}
	system("pause");
	return 0;
}
