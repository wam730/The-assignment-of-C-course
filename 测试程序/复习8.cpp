#include<stdio.h>
#include<cstdlib>
int main()
{
	double a,b;
	char op;
	printf("��������������������ʽ���Լ�������\n");
	scanf("%lf%c%lf",&a,&op,&b);
	switch(op)
	{
	case'+':				printf("%.0lf+%.0lf=%.1lf\n",a,b,a+b);break; 
	case'-':				printf("%.0lf-%.0lf=%.1lf\n",a,b,a-b);break;
	case'*':				printf("%.0lf*%.0lf=%.1lf\n",a,b,a*b);break;
	case'/':	if(b==0)	printf("���󣡳�������Ϊ0��\n");
				else		printf("%.0lf/%.0lf=%.1lf",a,b,a/b);  break;
	default:				printf("error ! \n");				  break;
	}
	system("pause");
	return 0;
}
