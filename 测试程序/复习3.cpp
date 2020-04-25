#include<stdio.h>
#include<cstdlib>
#define pi 3.1415926
int main()
{
	char i;
	printf("please input a char i\n");
	scanf("%c",&i);
	getchar();
	printf("\n%c %c %c\n\n",i-1,i,i+1);
	system("pause");
	return 0;
}
