#include<stdio.h>
#include<cstdlib>
int main()
{
	int a;
	void yingwen(int x);
	printf("�������·ݵ����֣�\n");
	scanf("%d",&a);
	yingwen(a);

	system("pause");
	return 0;
}
void yingwen(int x)
{
	if(x==1)			printf("Ӣ���ǣ�January\n");
	else if(x==2)		printf("Ӣ���ǣ�February\n");
	else if(x==3)		printf("Ӣ���ǣ�March\n");
	else if(x==4)		printf("Ӣ���ǣ�April\n");
	else if(x==5)		printf("Ӣ���ǣ�May\n");
	else if(x==6)		printf("Ӣ���ǣ�June\n");
	else if(x==7)		printf("Ӣ���ǣ�July\n");
	else if(x==8)		printf("Ӣ���ǣ�August\n");
	else if(x==9)		printf("Ӣ���ǣ�September\n");
	else if(x==10)		printf("Ӣ���ǣ�October\n");
	else if(x==11)		printf("Ӣ���ǣ�November\n");
	else if(x==12)		printf("Ӣ���ǣ�December\n");
}