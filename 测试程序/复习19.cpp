#include<stdio.h>		
#include<cstdlib>
#include<time.h>
int main()
{
	//ת�ã��������л���
	////ע�⣬����ת�ã��Խ����ϵ������ǲ����ģ����Ե��У��У����ǽ������л�������
	void zhuanzhi(int x[4][4]);
	srand(time(NULL));
	int a[4][4];
	int i,j;
	printf("������һ��4*4�ķ���\n");
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
	printf("\nת�ú�ķ���Ϊ\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%-2d ",x[i][j]);
		}
		printf("\n");
	}
}
