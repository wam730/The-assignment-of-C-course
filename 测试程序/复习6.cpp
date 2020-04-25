#include<stdio.h>
#include<cstdlib>
#define pi 3.1415926
int main()
{
	int y,m,d;
	printf("Please input a date :\n");
	scanf("%d%d%d",&y,&m,&d);
	if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==9)||(m==12))
	{
		if(d>=1&&d<=30)	
		{
			d++;
		}
		else if(d==31)
		{
			if(m==12)
			{
				d=1;y++;
			}
			else
			{
				m++;d=1;
			}
		}
		else
		{
			printf("error\n");
		}
	}
	else if(m==2)
	{
		if(d>=1&&d<=27)
		{
			d++;
		}
		else if(d==28)
		{
			if ((y%4==0&&y%100!=0)||(y%400==0))
			{
				d++;
			}
			else
			{
				d=1;m=3;
			}
		}
		else if(d==29)
		{
			if((y%4==0&&y%100!=0)||(y%400==0))
			{
				d=1;m=3;
			}
			else
			{
				printf("error\n");
			}
		}
	}
	else if((m==4)||(m==6)||(m==9)||(m==11))
	{
		if(d>=1&&d<=29)
		{
			d++;
		}
		else if(d==30)
		{
			d=1;
			m++;
		}
		else
		{
			printf("error\n");
		}
	}
	else if((m<=0)||(m>12))
	{
		printf("error\n");
	}
	printf("The next day is:%d %d %d\n",y,m,d);
	system("pause");
	return 0;
}
