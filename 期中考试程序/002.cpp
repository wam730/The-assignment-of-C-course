#include<stdio.h>
int main()
{
	int a[1000],i,j,tmp,n;
	printf("��������Ҫ��������ָ�����\n");
	scanf("%d\n",&n);
	printf("������n����:\n");
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
	printf("����Ϊ��");
	for(i=0;i<n;i++)
	{printf("%d ",a[i]);}
	return 0;
}