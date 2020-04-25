#include<stdio.h>
#include<cstdlib>				//考试没必要写
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
			a[i][j]=rand()%101	;			////只用写一个%d就好
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
			if(a[i][j]>a[maxh][maxl])			////如果某个数大于a【0】【0】，则把它定义为最大的数，再比较
			{
				maxh=i;
				maxl=j;
			}
		}
	}
	printf("The biggest number is a[%d][%d]=%d",maxh,maxl,a[maxh][maxl]);
	system("pause");			//考试没必要写
	return 0;
}
