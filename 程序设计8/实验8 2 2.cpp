#include<stdio.h>
#include<cstdlib>
#include<string.h>
#include<stdlib.h>
#define n 10
struct student
{
	char num[8];
	char name[3];
	float c_1;
	float c_2;
	float c_3;
	float average;
}stu[11],temp,temp_1;
int main()
{
	int i,j;
	float t;
	int save();
	void input();
	int savebest();
	int save_1();
	printf("����input.txt�ļ�������%dλͬѧ����Ϣ��������ѧ�ţ�4λ�����������γ�1��3�ɼ�\n",n);
	
	input();
	
	printf("��%dλͬѧ����ϢΪ��\n",n);
	printf("\nѧ��        ����    �γ�1       �γ�2       �γ�3\n");
	for(i=0;i<n;i++)
	{
		printf("%5s%12s%9.1f ��%9.1f ��%9.1f ��\n",stu[i].num,stu[i].name,stu[i].c_1,stu[i].c_2,stu[i].c_3);
	}

	printf("��չʾ%dλͬѧ��ƽ���֣������������\n",n);
	system("pause");
	printf("������%dλͬѧ��3�ſγ̵�ƽ����\n",n);
	for(i=0;i<n;i++)
	{
		t=0;
		printf("������%8s  ƽ���֣�%.1f ��\n",stu[i].name,t=(stu[i].c_1+stu[i].c_2+stu[i].c_3)/3.0);
		stu[i].average=t;
	}
	
	printf("��չʾƽ������ߵ�ͬѧ����Ϣ�������������\n",n);
	system("pause");
	printf("����ƽ������ߵ�ͬѧ����Ϣ\n",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(stu[j].average<stu[j+1].average)
			{
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		}
	}
	
	savebest();	
	
	save();
	
	printf("������%8s  ƽ���֣�%.1f ��\n",stu[0].name,stu[0].average);
	printf("\n����%dλͬѧ����ƽ���ָߵͽ�������\n",n);
	for(i=0;i<n;i++)
	{
		printf("������%8s  ƽ���֣�%.1f ��\n",stu[i].name,stu[i].average);
	}

	printf("�������һλͬѧ����Ϣ������������ƽ����,�밴���������\n");
	system("pause");
	printf("�����������%dλͬѧ����Ϣ��������ѧ�ţ�4λ�����������γ�1��3�ɼ�\n",n+1);
	scanf("%s%s%f%f%f",&stu[10].num,&stu[10].name,&stu[10].c_1,&stu[10].c_2,&stu[10].c_3);
	
	stu[10].average=((stu[10].c_1+stu[10].c_2+stu[10].c_3)/3.0);
	
	
	printf("������Ϣ���ƽ��������Ϊ��\n");
	for(i=0;i<n+1;i++)
	{
		for(j=0;j<n+1-i-1;j++)
			{
				if(stu[j].average<stu[j+1].average)
				{
					temp_1=stu[j];
					stu[j]=stu[j+1];
					stu[j+1]=temp_1;
				}
			}
	}
	
	save_1();
	
	printf("\n���¶���%dλͬѧ����ƽ���ָߵͽ�������\n",n+1);
	
	for(i=0;i<n+1;i++)
	{
		printf("������%8s  ƽ���֣�%.1f ��\n",stu[i].name,stu[i].average);
	}
	system("pause");
	return 0;
}

int save()
{
	FILE *fp;
	int i;
	if((fp = fopen("�ļ�����grade.txt","w+"))==NULL)
	{
		printf("cannot open grade.txt\n");
		exit(0);
	}
	fprintf(fp,"%s\t\n","������δ������Ϣ��ƽ�����ɸߵ��������ļ����룩");
	fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\n","����","ѧ��","�γ�1","�γ�2","�γ�3","ƽ����");
	for(i=0;i<n;i++)
	{
	fprintf(fp,"%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t\n",stu[i].name,stu[i].num,stu[i].c_1,stu[i].c_2,stu[i].c_3,stu[i].average);
	}
	fclose(fp);
	return 0;
}

int savebest()
{
	FILE *fp;
	if((fp = fopen("�ļ�����gradebest.txt","w+"))==NULL)
	{
		printf("cannot open grade.txt\n");
		exit(0);
	}
	fprintf(fp,"%s\t\n","������δ��������ǰ�ɼ��������ѧ�����ļ����룩");
	fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\n","����","ѧ��","�γ�1","�γ�2","�γ�3","ƽ����");
	fprintf(fp,"%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t\n",stu[0].name,stu[0].num,stu[0].c_1,stu[0].c_2,stu[0].c_3,stu[0].average);
	fclose(fp);
	return 0;
}

int save_1()
{
	FILE *fp;
	int i;
	if((fp = fopen("�ļ�����grad_1.txt","w+"))==NULL)
	{
		printf("cannot open grade.txt\n");
		exit(0);
	}
	fprintf(fp,"%s\t\n","���������������ƽ�����ɸߵ��������ļ����룩");
	fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\n","����","ѧ��","�γ�1","�γ�2","�γ�3","ƽ����");
	for(i=0;i<n+1;i++)
	{
	fprintf(fp,"%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t\n",stu[i].name,stu[i].num,stu[i].c_1,stu[i].c_2,stu[i].c_3,stu[i].average);
	}
	return 0;
}

void input()
{
	int i;

	FILE *fp;
	
	if( (fp=fopen("input.txt","r")) == NULL)
	{
		printf("cannot open grade.txt\n");
		exit(0);
	}


	for(i=0;i<n;i++)
	
	{
		fscanf(fp,"%s%s%f%f%f",&stu[i].num,&stu[i].name,&stu[i].c_1,&stu[i].c_2,&stu[i].c_3);
	
	}
	
	fclose(fp);
}