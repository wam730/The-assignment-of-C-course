#include<stdio.h>
#include<cstdlib>
int main()
{
	char a[100000];
	int i,num=0;
	printf("������һ���ַ�����\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		num++;
	}
	printf("\n����Ϊ��%d\n",num);
	system("pause");
	return 0;
}