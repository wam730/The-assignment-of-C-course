#include <stdio.h>
int main() 
{
	double a,b,c,d;
	printf("�����������С�����ʵ��a\n");
	scanf("%lf",&a);
	printf("�����������С�����ʵ��b\n");
	scanf("%lf",&b);
	printf("�����������С�����ʵ��c\n");
	scanf("%lf",&c);
	printf("������ʵ��Ϊ��\n %lf %lf %lf",a,b,c); 
	printf("\n����������������ͺ���Ϊ��\n%.0f\n",d=(int)(a+b+c+0.5));
	system("pause");
	return 0;
	
	
}
