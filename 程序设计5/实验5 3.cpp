#include<stdio.h>
#include<cstdlib>
#include<time.h>
#define n 5
int main()
{
	int a[5][5],maxrow=0,maxcol=0,i,j;
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=rand()%10000;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
		}
	}
     for(i=0; i<5; i++)
	{
           for(j=0;j<5;j++)     
	     {
               if(a[i][j]>a[maxrow][maxcol])
					{ 
						maxrow = i;  maxcol = j;   
					}
          }
	}
	printf("最大值是:a[%d][%d]=%d", maxrow,maxcol, a[maxrow][maxcol]);
	system("pause");
	return 0;
}