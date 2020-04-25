#include<stdio.h>
#include<cstdlib>
int main()
{
	int a[10],i,j,x;
	printf("please input 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int paixu(int *x,int n);
	paixu(a,10);
	system("pause");
	return 0;
}

int paixu(int *x,int n)
{
	int p,q,temp;
	for(p=0;p<n-1;p++)
	{
		for(q=p+1;q<n;q++)
			if(x[p]<x[q])
			{
				temp=x[p];
				x[p]=x[q];
				x[q]=temp;
			}
	}
	for(p=0;p<10;p++)
	{
		printf("%d ",x[p]);
	}
	return 0;
}