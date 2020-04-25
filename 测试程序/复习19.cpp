#include<stdio.h>		
#include<cstdlib>
#include<time.h>
int main()
{
	//转置，就是行列互换
	////注意，方阵转置，对角线上的数据是不会变的，所以当列＞行，我们将它行列互换即可
	void zhuanzhi(int x[4][4]);
	srand(time(NULL));
	int a[4][4];
	int i,j;
	printf("请输入一个4*4的方阵：\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=rand()%21;
		}
	}
	zhuanzhi(a);	
	system("pause");
	return 0;
}
void zhuanzhi(int x[4][4])
{
	int i,j,t;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j>i)
			{
				t=x[i][j];
				x[i][j]=x[j][i];
				x[j][i]=t;
			}
		}
	}
	printf("\n转置后的方阵为\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%-2d ",x[i][j]);
		}
		printf("\n");
	}
}
