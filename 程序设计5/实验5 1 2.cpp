#include<stdio.h>
#include<cstdlib>
#include<stdlib.h>
#include <time.h> 
clock_t start, stop; 
double duration;
int main()
{	
	int i,j,s[50000],tmp,n=50000;
	
	start=clock();

	srand(time(NULL));
    
	printf("�������%d����������ٶȽ�������ȴ���\n",n);
    for(i = 0; i < n; i++)
	{
		/*printf("%6d ",*/s[i]=rand()%200000/*)*/;
	}
		for(i=0;i<n-1;i++)
    {
		for(j=0;j<n-i-1;j++)
		{
		      if (s[j]>s[j+1] )
		     {
			  tmp=s[j];
			  s[j]=s[j+1];
			  s[j+1]=tmp;
		     }
		}
	}
	printf("\n\n\n");
	printf("�������%d�����������\n\n",n);	
	for(i=0;i<=n-1;i++) printf("%6d ",s[i]);
	printf("\n");
    stop=clock();
    duration=(double)(stop-start)/CLK_TCK; 
    printf("���γ���ִ�е�ʱ��Ϊ��%.2f ��\n",duration);
	system("pause\n");
	return 0;
}