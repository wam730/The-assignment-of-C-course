#include <stdio.h>
#include <cstdlib>
int main()
{
	long int A=1,A1=0,A2=1,i=0,an,n,sn=0;
	char a;
	printf("*欢迎使用本程序*\n我们将为您计算斐波拉契数列的第n项、写出其前n项、计算前n项的和\n");
	printf("请输入第几项n=");
	scanf("%d",&n);
	printf("前n项为：                                   \n");
	if(n==1)				printf("a1=1\n斐波拉契数列的前1项的和为S1=0");
	else if(n==2)			printf("a1=1\na2=2\n斐波拉契数列的前2项的和为：S2=1");
	else if(n==3)			printf("a1=1\na2=2\na3=3\n斐波拉契数列的前3项的和为：S3=2");
	else if(n>3&&n<=45)
	{printf("a1=0\na2=1\na3=1\n");
	while(i<n-3)
	{A1=A2;
	A2=A;
	A=A1+A2;
	an=A;
	sn=sn+an;
	printf("a%d=%d\n",i+4,an);
	i++;}
	printf("斐波拉契数列的前%d项的和为：S%d=%d\n",n,n,sn+2);}
	else					printf("数据溢出，请输入更小的正整数!\n");
	printf("				by wyj\n");
	system("pause");
	return 0;
}