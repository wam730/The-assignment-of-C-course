#include<stdio.h>
#include<cstdlib>				//����û��Ҫд
#include<time.h>
#define n 10				
#define pi 3.1415926
int main()
{
	srand(time(NULL));
	int a[5][5],i,j,maxh=0,maxl=0;
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
		{
			a[i][j]=rand()%101	;			////ֻ��дһ��%d�ͺ�
		}
	}
	printf("\n");
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
		{
			printf("%-4d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
		{
			if(a[i][j]>a[maxh][maxl])			////���ĳ��������a��0����0�������������Ϊ���������ٱȽ�
			{
				maxh=i;
				maxl=j;
			}
		}
	}
	printf("The biggest number is a[%d][%d]=%d",maxh,maxl,a[maxh][maxl]);
	system("pause");			//����û��Ҫд
	return 0;
}
