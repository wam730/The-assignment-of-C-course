#include<stdio.h>
int main()
{
	char mouth1;
	int  year,t,day;	
	printf("请输入月,请以两位数输入，不足用0代替：\n");
	scanf("%d",&mouth1);
	printf("请输入年\n");
	scanf("%d",&year);	
	printf("请输入日\n");
	scanf("%d",&day);

	 if ((year%100!=0 && year%4==0 )|| (year%100==0 && year%400==0))  
	 {	switch(int(mouth1))
		{
		case'1':printf("\n%d\n",t=day);break;
		case'2':printf("\n%d\n",t=31+day);break;
		case'3':printf("\n%d\n",t=31+29+day);break;
		case'4':printf("\n%d\n",t=31+29+31+day);break;
		case'5':printf("\n%d\n",t=31+29+31+30+day);break;
		case'6':printf("\n%d\n",t=31+29+31+30+31+day);break;
		case'7':printf("\n%d\n",t=31+29+31+30+31+30+day);break;
		case'8':printf("\n%d\n",t=31+29+31+30+31+30+31+day);break;
		case'9':printf("\n%d\n",t=31+29+31+30+31+30+31+31+day);break;
	/*	case'10':printf("\n%d\n",t=31+29+31+30+31+30+31+31+30+day);break;
		case'11':printf("\n%d\n",t=31+29+31+30+31+30+31+31+30+31+day);break;
		case'12':printf("\n%d\n",t=31+29+31+30+31+30+31+31+30+31+30+day);break;*/
		}
	 }
	 else
	{	switch(mouth1)
		{
		case'1':printf("\n%d\n",t=day);break;
		case'2':printf("\n%d\n",t=31+day);break;
		case'3':printf("\n%d\n",t=31+28+day);break;
		case'4':printf("\n%d\n",t=31+28+31+day);break;
		case'5':printf("\n%d\n",t=31+28+31+30+day);break;
		case'6':printf("\n%d\n",t=31+28+31+30+31+day);break;
		case'7':printf("\n%d\n",t=31+28+31+30+31+30+day);break;
		case'8':printf("\n%d\n",t=31+28+31+30+31+30+31+day);break;
		case'9':printf("\n%d\n",t=31+28+31+30+31+30+31+31+day);break;
	/*	case'10':printf("\n%d\n",t=31+28+31+30+31+30+31+31+30+day);break;
		case'11':printf("\n%d\n",t=31+28+31+30+31+30+31+31+30+31+day);break;
		case'12':printf("\n%d\n",t=31+30+31+30+31+30+31+31+30+31+30+day);break;*/
		 }
	 }
	return 0;
}
