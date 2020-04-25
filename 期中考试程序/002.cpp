#include<stdio.h>
int main()
{
	int a[1000],i,j,tmp,n;
	printf("请输入你要输入的数字个数：\n");
	scanf("%d\n",&n);
	printf("请输入n个数:\n");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
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
	printf("排序为：");
	for(i=0;i<n;i++)
	{printf("%d ",a[i]);}
	return 0;
}