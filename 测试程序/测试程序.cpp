#include<stdio.h>		
#include<cstdlib>
#define n 4

struct student
{
	char name[10];
	float a;
	float b;
	float c;
	float aver;
}stu[4],t;
void paixu1(student x[3],student a);
void paixu2(student x[4],student a);
void best();
int main()
{	
	int i;
	printf("����������%dλͬѧ��������γ�1��2��3�ķ�����\n",n-1);
	for(i=0;i<n-1;i++)
	{
		scanf("%s%f%f%f",&stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c);
	}
	for(i=0;i<n-1;i++)
	{
		stu[i].aver=((stu[i].a+stu[i].b+stu[i].c)/3.0);
	}
	printf("******************************************************************************\n");
	//��******������������//
	printf("������ƽ���ɼ��ɸߵ��͵�����\n");	
	paixu1(stu,t);	
	for(i=0;i<n-1;i++)
	{
		printf("������%-5s  �γ�1��%2.1f �� �γ�2��%2.1f �� �γ�3��%2.1f �� ƽ���֣�%2.1f ��\n",stu[i].name,stu[i].a,stu[i].b,stu[i].c,stu[i].aver);
	}//Ҫ�����ʹ򸺺�//
	printf("******************************************************************************\n");
	
	best();

	printf("******************************************************************************\n");
	printf("������һλͬѧ����Ϣ��ͬ�ϣ���\n");
	scanf("%s%f%f%f",&stu[3].name,&stu[3].a,&stu[3].b,&stu[3].c);
	//ע������//
	for(i=0;i<n;i++)
	{
		stu[i].aver=((stu[i].a+stu[i].b+stu[i].c)/3.0);
	}
	printf("******************************************************************************\n");
	printf("�����ǲ���һλͬѧ��Ϣ��ƽ���ɼ��ɸߵ��͵�����\n");
	paixu2(stu,t);
	system("pause");
	return 0;
}

void paixu1(student x[4],student a)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-1-i;j++)
		{
			if(x[j].aver<x[j+1].aver)
			//��Ҫ�ɸߵ��������������ǰһ������һ��//
			//�򽫴�ĸ�ֵ��С�ģ������ֱ���С�ĵ�ֵ//
			////�����֮�����汻��ֵ������////
			{
				a=x[j];
				x[j]=x[j+1];
				x[j+1]=a;
			}
		}
	}
}
void best()
{
	paixu1(stu,t);
	printf("ƽ������ߵ�ͬѧ��ϢΪ\n������%-5s  �γ�1��%2.1f �� �γ�2��%2.1f �� �γ�3��%2.1f �� ƽ���֣�%2.1f ��\n",stu[0].name,stu[0].a,stu[0].b,stu[0].c,stu[0].aver);
}
void paixu2(student x[4],student a)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(x[j].aver<x[j+1].aver)
			{
				a=x[j];
				x[j]=x[j+1];
				x[j+1]=a;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("������%-5s �γ�1��%2.1f ��  �γ�2��%2.1f �� �γ�3��%2.1f �� ƽ���֣�%2.1f ��\n",stu[i].name,stu[i].a,stu[i].b,stu[i].c,stu[i].aver);
	}
}
