
#include<stdio.h>
#include<cstdlib>
#define pi 3.1415926
int main()
{
	float moheight,faheight,height;
	char a,b,c;
	printf("Please input mother's height\n");
	scanf("%f",&moheight);
	
	printf("Please input father's height\n");
	scanf("%f",&faheight);
	getchar();
	
	printf("What is your child's gender? Please input m or f:\n");//输入男（m）、女（f）
	scanf("%c",&a);
	getchar();

	printf("Does your child love sports? Please input y or n:\n");//是否爱运动
	scanf("%c",&b);	
	getchar();
	
	printf("Does your child have good healthy eating habits? Please inout y or n:\n");//是否饮食健康
	scanf("%c",&c);
	printf("\n");
	if(a=='m'&&b=='y'&&c=='y')			printf("Your child's predicted height is : %.2f cm\n",height=(faheight+moheight)*0.54*1.02*1.015);
	else if(a=='m'&&b=='y'&&c=='n')		printf("Your child's predicted height is : %.2f cm\n",height=(faheight+moheight)*0.54*1.02);
	else if(a=='m'&&b=='n'&&c=='y')		printf("Your child's predicted height is : %.2f cm\n",height=(faheight+moheight)*0.54*1.015);
	else if(a=='m'&&b=='n'&&c=='n')		printf("Your child's predicted height is : %.2f cm\n",height=(faheight+moheight)*0.54);
	else if(a=='f'&&b=='y'&&c=='y')		printf("Your child's predicted height is : %.2f cm\n",height=(faheight*0.923+moheight)/2.0*1.02*1.015);
	else if(a=='f'&&b=='y'&&c=='n')		printf("Your child's predicted height is : %.2f cm\n",height=(faheight*0.923+moheight)/2.0*1.02);
	else if(a=='f'&&b=='n'&&c=='y')		printf("Your child's predicted height is : %.2f cm\n",height=(faheight*0.923+moheight)/2.0*1.015);
	else if(a=='f'&&b=='n'&&c=='n')		printf("Your child's predicted height is : %.2f cm\n",height=(faheight*0.923+moheight)/2.0);
	else

	system("pause");
	return 0;
}
