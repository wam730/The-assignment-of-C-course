#include <stdio.h>
#include <cstdlib>
int main()
{
	long int A=1,A1=0,A2=1,i=0,an,n,sn=0;
	char a;
	printf("*��ӭʹ�ñ�����*\n���ǽ�Ϊ������쳲��������еĵ�n�д����ǰn�����ǰn��ĺ�\n");
	printf("������ڼ���n=");
	scanf("%d",&n);
	printf("ǰn��Ϊ��                                   \n");
	if(n==1)				printf("a1=1\n쳲��������е�ǰ1��ĺ�ΪS1=0");
	else if(n==2)			printf("a1=1\na2=2\n쳲��������е�ǰ2��ĺ�Ϊ��S2=1");
	else if(n==3)			printf("a1=1\na2=2\na3=3\n쳲��������е�ǰ3��ĺ�Ϊ��S3=2");
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
	printf("쳲��������е�ǰ%d��ĺ�Ϊ��S%d=%d\n",n,n,sn+2);}
	else					printf("����������������С��������!\n");
	printf("				by wyj\n");
	system("pause");
	return 0;
}