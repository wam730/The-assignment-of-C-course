#include<stdio.h>
#include<cstdlib>				//考试没必要写
#include<time.h>
#define n 100				
#define pi 3.1415926
int main()
{
	//将冒泡排序与顺序排序放在一起写
	
	////冒泡排序记得第二个j循环是j＜n-i-1

	////顺序排序要注意溢出的问题，第二个循环j=i+1，则j必须小于n-1，因为i＜n-1，若i=n，则j=n+1，就溢出了

	////******a【100】是没有a【100】这一项的，只有a【99】作为最后一项******////
	
	//注意temp交换的顺序
	////注意是从大到小还是从小到大排序////
	//学会随机数写法
	int a[100],i,j,temp;
	srand(time(NULL));
	printf("将为你排序100个数，从小到大\n");
	for(i=0;i<100;i++)
	{
		a[i]=rand()%2001;
	}
	printf("顺序排序：\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[j]<a[i])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%4d ",a[i]);
	}

	printf("\n\n\n\n\n");
	printf("冒泡排序：\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		if(a[j+1]<a[j])
		{
			temp=a[j];
			a[i]=a[j+1];
			a[j+1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%4d ",a[i]);
	}
	printf("\n\n\n\n\n");
	system("pause");			//考试没必要写
	return 0;
}
