#include <stdio.h>
#include <cstdlib>
int main() 
	{
	int year,mouth,day;
	printf("�����������ꡢ�¡��գ���Ϊ�������Ӧ���ڵ���һ�� \n���������:") ;
	scanf("%d",&year);	
	if(year<1) 
	{
		printf("�������������Ƿ����\n"); 
		return 0;
	}
	printf("�������·�:") ;
	scanf("%d",&mouth);
		if((mouth<1)||(mouth>12)) 
	{
		printf("�������������Ƿ����\n"); 
		return 0;
	}
	printf("�����뼸��:");
	scanf("%d",&day);
	if((year%100 ==0&&year%400 == 0)||(year%100!=0&&year%4 == 0))
		{if((mouth==1)||(mouth==3) ||(mouth==5)||(mouth==7)||(mouth==8)||(mouth==10))
			if(day==31)					printf("��һ����%d��%d��%d��\n",year=year,mouth=mouth+1,day=1);
			else if(day<31 && day>0)	printf("��һ����%d��%d��%d��\n",year=year,mouth=mouth,day=day+1);
			else						printf("�������������Ƿ����\n");
		else if((mouth==4)||(mouth==6)||(mouth==9)||(mouth==11))
			if(day==30)					printf("��һ����%d��%d��%d��\n",year=year,mouth=mouth+1,day=1);
			else if(day>0&&day<30)		printf("��һ����%d��%d��%d��\n",year=year,mouth=mouth,day=day+1);
			else						printf("�������������Ƿ����\n");
		else if(mouth==2)
			if(day==29)					printf("��һ����%d��%d��%d��\n",year=year,mouth=3,day=1);
			else if(day<29&&day>1)		printf("��һ����%d��%d��%d��\n",year=year,mouth=2,day=day+1);
			else						printf("�������������Ƿ����\n");
    	else if(mouth==12)
    		if(day==31)					printf("��һ����%d��%d��%d��\n",year=year+1,mouth=1,day=1);
    		else if(day<31&&day>0)		printf("��һ����%d��%d��%d��\n",year=year,mouth=12,day=day+1);
    	else if(mouth<=0||mouth>13) 	printf("�������������Ƿ����\n");
		else 							printf("�������������Ƿ����\n");
    	} 
	else 
		{if((mouth==1)||(mouth==3) ||(mouth==5)||(mouth==7)||(mouth==8)||(mouth==10)) 
			if(day==31)					printf("��һ����%d��%d��%d��\n",year=year,mouth=mouth+1,day=1);
			else if(day<31 && day>0)	printf("��һ����%d��%d��%d��\n",year=year,mouth=mouth,day=day+1);
			else						printf("�������������Ƿ����\n");
		else if((mouth==4)||(mouth==6)||(mouth==9)||(mouth==11))
			if(day==30)					printf("��һ����%d��%d��%d��\n",year=year,mouth=mouth+1,day==1);
			else if(day>0&&day<30)		printf("��һ����%d��%d��%d��\n",year=year,mouth=mouth,day=day+1);
			else						printf("�������������Ƿ����\n");
		else if(mouth==2)
			if(day==28)					printf("��һ����%d��%d��%d��\n",year=year,mouth=3,day=1);
			else if(day<28&&day>1)		printf("��һ����%d��%d��%d��\n",year=year,mouth=2,day=day+1);
			else						printf("�������������Ƿ����\n");
    	else if(mouth==12)
    		if(day==31)					printf("��һ����%d��%d��%d��\n",year=year+1,mouth=1,day=1);
    		else if(day<31&&day>0)		printf("��һ����%d��%d��%d��\n",year=year,mouth=12,day=day+1);
    		else						printf("�������������Ƿ����\n");
    	else if(mouth<=0||mouth>13) 	printf("�������������Ƿ����\n");
    	else 							printf("�������������Ƿ����\n");
    	} 
    system("pause");
	return 0;
		}
