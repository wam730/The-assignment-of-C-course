#include<stdio.h>
#include<cstdlib>
#include<time.h>
int main()
{
	int i,j,p,flag,a[11],n=10,tmp;
   	srand(time(NULL));
	for(i = 0; i < n; i++)
	{
	a[i]=rand()%100;
	}
		for(i=0;i<n-1;i++)
    {
		for(j=0;j<n-i-1;j++)
		{
		      if (a[j]>a[j+1] )
		     {
			  tmp=a[j];
			  a[j]=a[j+1];
			  a[j+1]=tmp;
		     }
		}
	}
	printf("对%d个随机数排序\n",n);
	for(i=0;i<=n-1;i++) 
		{
			printf("%-6d ",a[i]);
		}
	printf("\n");	
	printf("请输入P的值：");
	scanf("%d",&p);
	for(i=0;i<10;i++)
	{
		if(p==a[i])
			{
					for(j=i;j<9;j++)
				{
					a[j]=a[j+1];
				}
				flag=-1;
				break;
			}
		else if(p<a[i])
			{	
				for(j=10;j>i;j--)
				{	
					a[j]=a[j-1];		
				}
				a[i]=p;	flag=1;	break;
			}
		else
			{
				a[10]=p;	flag=1;
			}
	}
	for(i=0;i<10+flag;i++)
		{
			printf("%-6d",a[i]);
		}
	printf("\n");
	system("pause");
	return 0;
}