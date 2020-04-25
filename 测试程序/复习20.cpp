#include<stdio.h>		
#include<cstdlib>
void paixu(int *x,int n);
int main()
{	
	int i=0,a[10];
	printf("Please input 10 numbers :");
	while(i<10)
	{
		scanf("%d",&a[i]);
		i++;
	}
	paixu(a,10);
	system("pause");
	return 0;
}
void paixu(int *x,int n)
{
	int i=0,j,t;
	for(i=0;i<10-1;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(x[j]>x[j+1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	for(i=0;i<10;i++)	printf("%d ",x[i]);
}
