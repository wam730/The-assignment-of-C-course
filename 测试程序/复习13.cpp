#include<stdio.h>
#include<cstdlib>				//����û��Ҫд
#include<time.h>
#define n 100				
#define pi 3.1415926
int main()
{
	//��ð��������˳���������һ��д
	
	////ð������ǵõڶ���jѭ����j��n-i-1

	////˳������Ҫע����������⣬�ڶ���ѭ��j=i+1����j����С��n-1����Ϊi��n-1����i=n����j=n+1���������

	////******a��100����û��a��100����һ��ģ�ֻ��a��99����Ϊ���һ��******////
	
	//ע��temp������˳��
	////ע���ǴӴ�С���Ǵ�С��������////
	//ѧ�������д��
	int a[100],i,j,temp;
	srand(time(NULL));
	printf("��Ϊ������100��������С����\n");
	for(i=0;i<100;i++)
	{
		a[i]=rand()%2001;
	}
	printf("˳������\n");
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
	printf("ð������\n");
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
	system("pause");			//����û��Ҫд
	return 0;
}
