#include<stdio.h>
#include<cstdlib>
int main()
{
	int i,j,a[3][3];
	printf("请输入3*3的方阵，将对其进行转置:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	void zhuanzhi(int x[3][3]);
	zhuanzhi(a);
	system("pause");
	return 0;
}
void zhuanzhi(int x[3][3])
{
	int i,j,temp;
	for(i = 0;i < 3;i++)
	{
		for(j = 0; j < 3;j++)
		{
			if (j>i)
			{
				temp=x[i][j];
				x[i][j]=x[j][i];
				x[j][i]=temp;
			}
		}
	}
   for(i = 0;i < 3;i++)
	{
		for(j = 0; j < 3;j++)
		{
			printf("%d ",x[i][j]);
			
		}
			printf("\n");
   }
}


