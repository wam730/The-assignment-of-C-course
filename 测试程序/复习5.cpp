#include<stdio.h>
#include<cstdlib>
#define pi 3.1415926
int main()
{
    float a,b,c,sum;
	printf("������3������ʵ�����Կո����\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("������ʵ���ǣ�%f��%f��%f\n",a,b,c);
	printf("�������������Ϊ��%.1f\n",sum=(int)(a+b+c+0.5));
	system("pause");
	return 0;
}
