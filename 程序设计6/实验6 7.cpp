#include<stdio.h>
#include<cstdlib>
int main()
{
	int y , m , d,a,b,s,c;
	int tianshu(int a,int b,int c);

	printf("请输入年月日，以空格隔开：");
	scanf("%d%d%d",&y,&m,&d);
	s=tianshu(y,m,d);
	printf("\n这是这一年的第%d天\n",s);
	system("pause");
	return 0;
}

int tianshu(int a,int b,int c)
{
		int da=31 , xiao=30 , t;

	if((a%4==0 && a%100!=0)||(a%400==0))
	{
		if(b==1)		t=c;
		if(b==2)		t=da+c;
		if(b==3)		t=da+29+c;
		if(b==4)		t=da*2+29+c;
		if(b==5)		t=da*2+29+xiao+c;
		if(b==6)		t=da*3+29+xiao+c;
		if(b==7)		t=da*3+29+xiao*2+c;
		if(b==8)		t=da*4+29+xiao*2+c;
		if(b==9)		t=da*5+29+xiao*2+c;
		if(b==10)		t=da*5+29+xiao*3+c;
		if(b==11)		t=da*6+29+xiao*3+c;
		if(b==12)		t=da*6+29+xiao*4+c;
	}
	else
	{
		if(b==1)		t=c;
		if(b==2)		t=da+c;
		if(b==3)		t=da+28+c;
		if(b==4)		t=da*2+28+c;
		if(b==5)		t=da*2+28+xiao+c;
		if(b==6)		t=da*3+28+xiao+c;
		if(b==7)		t=da*3+28+xiao*2+c;
		if(b==8)		t=da*4+28+xiao*2+c;
		if(b==9)		t=da*5+28+xiao*2+c;
		if(b==10)		t=da*5+28+xiao*3+c;
		if(b==11)		t=da*6+28+xiao*3+c;
		if(b==12)		t=da*6+28+xiao*4+c;
	}

	return t;
}
