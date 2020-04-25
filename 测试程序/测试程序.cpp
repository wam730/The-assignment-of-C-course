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
	printf("请依次输入%d位同学的姓名与课程1、2、3的分数：\n",n-1);
	for(i=0;i<n-1;i++)
	{
		scanf("%s%f%f%f",&stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c);
	}
	for(i=0;i<n-1;i++)
	{
		stu[i].aver=((stu[i].a+stu[i].b+stu[i].c)/3.0);
	}
	printf("******************************************************************************\n");
	//用******做区分清晰点//
	printf("下面是平均成绩由高到低的排序\n");	
	paixu1(stu,t);	
	for(i=0;i<n-1;i++)
	{
		printf("姓名：%-5s  课程1：%2.1f 分 课程2：%2.1f 分 课程3：%2.1f 分 平均分：%2.1f 分\n",stu[i].name,stu[i].a,stu[i].b,stu[i].c,stu[i].aver);
	}//要左对齐就打负号//
	printf("******************************************************************************\n");
	
	best();

	printf("******************************************************************************\n");
	printf("请输入一位同学的信息（同上）：\n");
	scanf("%s%f%f%f",&stu[3].name,&stu[3].a,&stu[3].b,&stu[3].c);
	//注意别溢出//
	for(i=0;i<n;i++)
	{
		stu[i].aver=((stu[i].a+stu[i].b+stu[i].c)/3.0);
	}
	printf("******************************************************************************\n");
	printf("下面是插入一位同学信息后平均成绩由高到低的排序\n");
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
			//是要由高到低排序，所有如果前一个＜后一个//
			//则将大的赋值给小的，所以现保存小的的值//
			////简而言之，保存被赋值的数据////
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
	printf("平均分最高的同学信息为\n姓名：%-5s  课程1：%2.1f 分 课程2：%2.1f 分 课程3：%2.1f 分 平均分：%2.1f 分\n",stu[0].name,stu[0].a,stu[0].b,stu[0].c,stu[0].aver);
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
		printf("姓名：%-5s 课程1：%2.1f 分  课程2：%2.1f 分 课程3：%2.1f 分 平均分：%2.1f 分\n",stu[i].name,stu[i].a,stu[i].b,stu[i].c,stu[i].aver);
	}
}
