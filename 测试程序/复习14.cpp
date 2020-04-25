#include<stdio.h>
#include<cstdlib>				//考试没必要写
#include<time.h>
#define n 10				
#define pi 3.1415926
int main()
{
	srand(time(NULL));
	int a[11],i,j,flag,temp,p;
	for(i=0;i<10;i++)
	{
		a[i]=rand()%101;
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}	
	printf("\n输入一个数p：");
	scanf("%d",&p);
	for(i=0;i<10;i++)
	{
		if(p==a[i])				//相等则删除，则从第i项开始，一直到最后一项结束，将后一项j+1赋值给j，因为少了一项，所以flag=-1；
		{
			for(j=i;j<10-1;j++)	//注意j＜9，不然j+1就要溢出；//
			{
				a[j]=a[j+1];
			}	
			flag=-1;
			break;				////不再循环；要放到循环外面，不然执行一次就结束了////
		}
		if(p<a[i])				//小于则从这一项之后插入p，则从a【i】每一项向后顺移一位；
		{
			for(j=10;j>i;j--)	////可是往后移动会导致值被覆盖，就很麻烦，想到上面后往前移动，我们从最后一项开始，
								////将最后一项的值赋值给他的下一项，就没有数据覆盖的问题了；
								////注意j是从最后一项10开始的，这一项一开始未被赋值；
								////因为j大于i，所以第j-1项是第i项，所以第i项的值被赋给了下一项，所以p插入第i项；
			{
				a[j]=a[j-1];
			}
			a[i]=p;flag=1;
			break;				////不再循环；要放到循环外面，不然执行一次就结束了////
		}
		else
		{
			a[10]=p;
			flag=1;
			/*break;*/			////***不再循环是错的，写了得不出正确结果***////
		}
	}
	for(i=0;i<10+flag;i++)		// i<10+flag
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	system("pause");			//考试没必要写
	return 0;
}
