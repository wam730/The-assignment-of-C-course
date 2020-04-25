#include <stdio.h>
#include <cstdlib>
int main() 
	{
	int year,mouth,day;
	printf("请依次输入年、月、日，将为您输出对应日期的下一天 \n请输入年份:") ;
	scanf("%d",&year);	
	if(year<1) 
	{
		printf("请检查日期输入是否错误\n"); 
		return 0;
	}
	printf("请输入月份:") ;
	scanf("%d",&mouth);
		if((mouth<1)||(mouth>12)) 
	{
		printf("请检查日期输入是否错误\n"); 
		return 0;
	}
	printf("请输入几号:");
	scanf("%d",&day);
	if((year%100 ==0&&year%400 == 0)||(year%100!=0&&year%4 == 0))
		{if((mouth==1)||(mouth==3) ||(mouth==5)||(mouth==7)||(mouth==8)||(mouth==10))
			if(day==31)					printf("下一天是%d年%d月%d号\n",year=year,mouth=mouth+1,day=1);
			else if(day<31 && day>0)	printf("下一天是%d年%d月%d号\n",year=year,mouth=mouth,day=day+1);
			else						printf("请检查日期输入是否错误\n");
		else if((mouth==4)||(mouth==6)||(mouth==9)||(mouth==11))
			if(day==30)					printf("下一天是%d年%d月%d号\n",year=year,mouth=mouth+1,day=1);
			else if(day>0&&day<30)		printf("下一天是%d年%d月%d号\n",year=year,mouth=mouth,day=day+1);
			else						printf("请检查日期输入是否错误\n");
		else if(mouth==2)
			if(day==29)					printf("下一天是%d年%d月%d号\n",year=year,mouth=3,day=1);
			else if(day<29&&day>1)		printf("下一天是%d年%d月%d号\n",year=year,mouth=2,day=day+1);
			else						printf("请检查日期输入是否错误\n");
    	else if(mouth==12)
    		if(day==31)					printf("下一天是%d年%d月%d号\n",year=year+1,mouth=1,day=1);
    		else if(day<31&&day>0)		printf("下一天是%d年%d月%d号\n",year=year,mouth=12,day=day+1);
    	else if(mouth<=0||mouth>13) 	printf("请检查日期输入是否错误\n");
		else 							printf("请检查日期输入是否错误\n");
    	} 
	else 
		{if((mouth==1)||(mouth==3) ||(mouth==5)||(mouth==7)||(mouth==8)||(mouth==10)) 
			if(day==31)					printf("下一天是%d年%d月%d号\n",year=year,mouth=mouth+1,day=1);
			else if(day<31 && day>0)	printf("下一天是%d年%d月%d号\n",year=year,mouth=mouth,day=day+1);
			else						printf("请检查日期输入是否错误\n");
		else if((mouth==4)||(mouth==6)||(mouth==9)||(mouth==11))
			if(day==30)					printf("下一天是%d年%d月%d号\n",year=year,mouth=mouth+1,day==1);
			else if(day>0&&day<30)		printf("下一天是%d年%d月%d号\n",year=year,mouth=mouth,day=day+1);
			else						printf("请检查日期输入是否错误\n");
		else if(mouth==2)
			if(day==28)					printf("下一天是%d年%d月%d号\n",year=year,mouth=3,day=1);
			else if(day<28&&day>1)		printf("下一天是%d年%d月%d号\n",year=year,mouth=2,day=day+1);
			else						printf("请检查日期输入是否错误\n");
    	else if(mouth==12)
    		if(day==31)					printf("下一天是%d年%d月%d号\n",year=year+1,mouth=1,day=1);
    		else if(day<31&&day>0)		printf("下一天是%d年%d月%d号\n",year=year,mouth=12,day=day+1);
    		else						printf("请检查日期输入是否错误\n");
    	else if(mouth<=0||mouth>13) 	printf("请检查日期输入是否错误\n");
    	else 							printf("请检查日期输入是否错误\n");
    	} 
    system("pause");
	return 0;
		}
