#include<stdio.h>
#include<cstdlib>
#include<string.h>
int main()
{
	char a[100000];
	int i;
	printf("�����������ַ���\n");
	gets(a);
	printf("\n��ӡ����ǣ�\n");
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}