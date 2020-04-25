#include<stdio.h>
int main()
{
	int a[11]={0,1,2,3,4,5,6,7,8,9},flag,p,i,j;
	printf("please input p\n");
	scanf("%d",&p);
	printf("%d",p);
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
		    p=a[i];
			for(j=10;j>i;j--)
			{
			a[j]=a[j-1];
			}
		    flag=1;
		    break;
		}
       else
	   {
		   p=a[i+1];
		   for(j=10;j>i+1;j--)
		   {
		   a[j+1]=a[j];
		   }
	       flag=1;
		   break;
	   
	   
	   }
		for(i=0;i<10+flag;i++)
			printf("%d\n",a[i]);
		return 0;
		
		
		}


	}
