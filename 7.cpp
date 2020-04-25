#include<stdio.h>
#include<cstdlib>
int main()
{
	char a[100000];
	int i,num=0;
	printf("请输入一个字符串：\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		num++;
	}
	printf("\n长度为：%d\n",num);
	system("pause");
	return 0;
}