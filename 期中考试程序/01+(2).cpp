#include<stdio.h>
int main()
{
	int mouth1,mouth2;
	int  year,t,day;	
	printf("请输入月,请以两位数输入，不足用0代替：\n");
	scanf("%c%c",&mouth1,&mouth2);
	printf("请输入年\n");
	scanf("%d",&year);	
	printf("请输入日\n");
	scanf("%d",&day);

	 if ((year%100!=0 && year%4==0 )|| (year%100==0 && year%400==0))  
	 {	switch(mouth1,mouth2)
		{
		case'01':printf("\n%d\n",t=day);break;
		case'02':printf("\n%d\n",t=31+day);break;
		case'03':printf("\n%d\n",t=31+29+day);break;
		case'04':printf("\n%d\n",t=31+29+31+day);break;
		case'05':printf("\n%d\n",t=31+29+31+30+day);break;
		case'06':printf("\n%d\n",t=31+29+31+30+31+day);break;
		case'07':printf("\n%d\n",t=31+29+31+30+31+30+day);break;
		case'08':printf("\n%d\n",t=31+29+31+30+31+30+31+day);break;
		case'09':printf("\n%d\n",t=31+29+31+30+31+30+31+31+day);break;
		case'10':printf("\n%d\n",t=31+29+31+30+31+30+31+31+30+day);break;
		case'11':printf("\n%d\n",t=31+29+31+30+31+30+31+31+30+31+day);break;
		case'12':printf("\n%d\n",t=31+29+31+30+31+30+31+31+30+31+30+day);break;
		}
	 }
	 else
	{	switch(mouth1,mouth2)
		{
		case'01':printf("\n%d\n",t=day);break;
		case'02':printf("\n%d\n",t=31+day);break;
		case'03':printf("\n%d\n",t=31+28+day);break;
		case'04':printf("\n%d\n",t=31+28+31+day);break;
		case'05':printf("\n%d\n",t=31+28+31+30+day);break;
		case'06':printf("\n%d\n",t=31+28+31+30+31+day);break;
		case'07':printf("\n%d\n",t=31+28+31+30+31+30+day);break;
		case'08':printf("\n%d\n",t=31+28+31+30+31+30+31+day);break;
		case'09':printf("\n%d\n",t=31+28+31+30+31+30+31+31+day);break;
		case'10':printf("\n%d\n",t=31+28+31+30+31+30+31+31+30+day);break;
		case'11':printf("\n%d\n",t=31+28+31+30+31+30+31+31+30+31+day);break;
		case'12':printf("\n%d\n",t=31+30+31+30+31+30+31+31+30+31+30+day);break;
		 }
	 }
	return 0;
}