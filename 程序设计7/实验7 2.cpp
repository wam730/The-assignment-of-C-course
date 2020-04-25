#include<stdio.h>
#include<cstdlib>
int main()
{
	
	float course_1[4],course_2[4],course_3[4],course_4[4],course_5[4];
	int i;
	void course_1_average(float *q,int n);
	void bujige(float c_1[4],float c_2[4],float c_3[4],float c_4[4],float c_5[4]);
	void youxiu(float c_1[4],float c_2[4],float c_3[4],float c_4[4],float c_5[4]);
	printf("请依次输入4名同学的课程1~5的成绩：\n");
	for(i=0;i<4;i++)
	{
		scanf("%f%f%f%f%f",&course_1[i],&course_2[i],&course_3[i],&course_4[i],&course_5[i]);
	}
	printf("这4位同学的信息为：\n");
	for(i=0;i<4;i++)
	{
		printf("姓名：%d 学号：000%d  课程1：%2.1f分 课程2：%2.1f分 课程3：%2.1f分 课程4：%2.1f分 课程5：%2.1f分\n",i+1,i+1,course_1[i],course_2[i],course_3[i],course_4[i],course_5[i]);
	}
	course_1_average(course_1,4);
	bujige(course_1,course_2,course_3,course_4,course_5);
	youxiu(course_1,course_2,course_3,course_4,course_5);
	system("pause");
	return 0;
}
void course_1_average(float *q,int n)
{
	float sum=0,average;
	int i;
	for(i=0;i<4;i++)
	{
		sum=sum+q[i];
	}
	average=sum/4;
	printf("\n课程1的平均成绩为：%2.1f 分\n\n",average);
}

void bujige(float c_1[4],float c_2[4],float c_3[4],float c_4[4],float c_5[4])
{
	int i,a,b,c,d,e;
	float t;
	printf("以下为成绩不合格的同学：\n");
	for(i=0;i<4;i++)	
	{
		a=0,b=0,c=0,d=0,e=0;
		if(c_1[i]<60)	{a++;}
		if(c_2[i]<60)	{b++;}
		if(c_3[i]<60)	{c++;}
		if(c_4[i]<60)	{d++;}
		if(c_5[i]<60)	{e++;}
		if(a+b+c+d+e>=2)
		{
			printf("\n姓名：%d 学号：000%d  课程1：%2.1f分 课程2：%2.1f分 课程3：%2.1f分 课程4：%2.1f分 课程5：%2.1f分\n",i+1,i+1,c_1[i],c_2[i],c_3[i],c_4[i],c_5[i]);
			printf("学号000%d的同学的平均成绩为%2.1f分\n",i,t=(c_1[i]+c_2[i]+c_3[i]+c_4[i]+c_5[i])/5.0);
		}
	}
}

void youxiu(float c_1[4],float c_2[4],float c_3[4],float c_4[4],float c_5[4])
{
	int i;
	float average,t,num=0;
	printf("以下为成绩优异的同学：\n");
	for(i=0;i<4;i++)
			{
				t=((c_1[i]+c_2[i]+c_3[i]+c_4[i]+c_5[i])/5);
				if(t>=90) printf("\n这名成绩优异的同学的姓名是：%d ,学号是：000%d\n",i+1,i+1);
			}
	for(i=0;i<4;i++)
	{
		if(c_1[i]>=85 && c_2[i]>=85 && c_3[i]>=85 && c_4[i]>=85 && c_5[i]>=85) printf("这名成绩优异的同学的姓名是：%d ,学号是：000%d\n",i+1,i+1); 
	}

}
