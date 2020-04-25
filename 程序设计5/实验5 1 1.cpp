#include<stdio.h>
#include<cstdlib>
#include<stdlib.h>
#include <time.h> 
clock_t start, stop; 
double duration;
int main()
{	
	int i,j,a[50000],tmp,n=50000;
	
	start=clock();
    
	srand(time(NULL));

	printf("随机产生%d个随机数，速度较慢，请等待:\n",n);
    for(i = 0; i < n; i++)
	{
		a[i]=rand()%55000;
	}
		for(i = 0; i <= n-2; i++)
		{
			for(j = i+1;j <= n-1; j++)
			{
				if(a[i]>a[j])
				{ 
					tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}	
		}
	printf("\n\n\n");
	printf("下面对这%d个随机数排序！\n\n",n);	
	for(i=0;i<=n-1;i++) printf("%6d ",a[i]);
	printf("\n");
    stop=clock();
    duration=(double)(stop-start)/CLK_TCK; 
    printf("本次程序执行的时间为：%f 秒 \n",duration);
	system("pause\n");
	return 0;
}