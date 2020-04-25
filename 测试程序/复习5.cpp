#include<stdio.h>
#include<cstdlib>
#define pi 3.1415926
int main()
{
    float a,b,c,sum;
	printf("请输入3个任意实数，以空格隔开\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("这三个实数是：%f、%f、%f\n",a,b,c);
	printf("求和四舍五入结果为：%.1f\n",sum=(int)(a+b+c+0.5));
	system("pause");
	return 0;
}
