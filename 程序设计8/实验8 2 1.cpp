#include<stdio.h>
#include<cstdlib>
#include<string.h>
#include<stdlib.h>
#define n 10
struct student
{
	char num[5];
	char name[8];
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
	printf("请依次输入%d位同学的信息，包括：学号（4位）、姓名、课程1—3成绩\n",n);
	for(i=0;i<n;i++)
		{
			scanf("%s%s%f%f%f",&stu[i].num,&stu[i].name,&stu[i].c_1,&stu[i].c_2,&stu[i].c_3);
		}
	/*input();*/
	printf("这%d位同学的信息为：\n",n);
	printf("\n学号        姓名    课程1       课程2       课程3\n");
	for(i=0;i<n;i++)
	{
		printf("%5s%10s%9.1f 分%9.1f 分%9.1f 分\n",stu[i].num,stu[i].name,stu[i].c_1,stu[i].c_2,stu[i].c_3);
	}

	printf("将展示%d位同学的平均分，按任意键继续\n",n);
	system("pause");
	printf("以下是%d位同学的3门课程的平均分\n",n);
	for(i=0;i<n;i++)
	{
		t=0;
		printf("姓名：%8s  平均分：%.1f 分\n",stu[i].name,t=(stu[i].c_1+stu[i].c_2+stu[i].c_3)/3.0);
		stu[i].average=t;
	}
	
	printf("将展示平均分最高的同学的信息，按任意键继续\n",n);
	system("pause");
	printf("以下平均分最高的同学的信息\n",n);
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
	
	printf("姓名：%8s  平均分：%.1f 分\n",stu[0].name,stu[0].average);
	printf("\n对这%d位同学按照平均分高低进行排序\n",n);
	for(i=0;i<n;i++)
	{
		printf("姓名：%8s  平均分：%.1f 分\n",stu[i].name,stu[i].average);
	}

	printf("下面插入一位同学的信息，并重新排序平均分,请按任意键继续\n");
	system("pause");
	printf("请依次输入第%d位同学的信息，包括：学号（4位）、姓名、课程1—3成绩\n",n+1);
	scanf("%s%s%f%f%f",&stu[10].num,&stu[10].name,&stu[10].c_1,&stu[10].c_2,&stu[10].c_3);
	
	stu[10].average=((stu[10].c_1+stu[10].c_2+stu[10].c_3)/3.0);
	
	
	printf("插入信息后的平均分排序为：\n");
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
	
	printf("\n重新对这%d位同学按照平均分高低进行排序\n",n+1);
	
	for(i=0;i<n+1;i++)
	{
		printf("姓名：%8s  平均分：%.1f 分\n",stu[i].name,stu[i].average);
	}
	system("pause");
	return 0;
}

int save()
{
	FILE *fp;
	int i;
	if((fp = fopen("grade.txt","w+"))==NULL)
	{
		printf("cannot open grade.txt\n");
		exit(0);
	}
	fprintf(fp,"%s\t\n","以下是插入信息后按平均分由高到低排序");
	fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\n","姓名","学号","课程1","课程2","课程3","平均分");
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
	if((fp = fopen("gradebest.txt","w+"))==NULL)
	{
		printf("cannot open grade.txt\n");
		exit(0);
	}
	fprintf(fp,"%s\t\n","以下是未重新排序前成绩最优秀的学生");
	fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\n","姓名","学号","课程1","课程2","课程3","平均分");
	fprintf(fp,"%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t\n",stu[0].name,stu[0].num,stu[0].c_1,stu[0].c_2,stu[0].c_3,stu[0].average);
	fclose(fp);
	return 0;
}

int save_1()
{
	FILE *fp;
	int i;
	if((fp = fopen("grad_1.txt","w+"))==NULL)
	{
		printf("cannot open grade.txt\n");
		exit(0);
	}
	fprintf(fp,"%s\t\n","以下是重新排序后按平均分由高到低排序");
	fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\n","姓名","学号","课程1","课程2","课程3","平均分");
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