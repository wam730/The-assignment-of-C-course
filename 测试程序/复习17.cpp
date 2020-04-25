#include<stdio.h>
#include<cstdlib>								//考试没必要写
int main(void)
{
	//对于杨辉三角，特点在于：
	////对角线行=列的时候为1、每一行第一列为1；
	////除开上述地方，其余数等于他头上的数与头上这个数左边的数的和
	////当遇到行列相等时，则换行；
	int a[20][20],i,j;
	for(i=0;i<20;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<20;i++)							////记住外层i为2////		
	{											////记住内层j为1////
		for(j=1;j<i;j++)						////j<i/////////////
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	for(i=0;i<20;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%-7d",a[i][j]);
		}
		printf("\n");
	}
	system("pause");							//考试没必要写
	return 0;
}

