#include<stdio.h>
#include<cstdlib>
int main()
{
	char a[10000];
	int i;
	printf("Plase input a text :\n");
	
	gets(a);
	
	void chazhao(char *x,int n);
	chazhao(a,10000);
	system("pause");
	return 0;
}
void chazhao(char *x,int n)
{
	int i,daxie=0,xiaoxie=0,blank=0,num=0,other=0;
	for(i=0;i<10000;i++)
	{
		if((x[i]>='a' && x[i]<='z'))
		{
			xiaoxie++;
		}
		else if((x[i]>='A' && x[i]<='Z'))
		{
			daxie++;
		}
		else if(x[i]==' ')
		{
			blank++;
		}
		else if((x[i]>='0' && x[i]<='9'))
		{
			num++;
		}
		else
		{
			other++;
		}
	}
	printf("��д��ĸ����Ϊ��%d\n ",daxie);
	printf("Сд��ĸ����Ϊ��%d\n",xiaoxie);
	printf("�ո����Ϊ��    %d\n",blank);
	printf("���ָ���Ϊ��    %d\n",num);
	printf("�����ַ�����Ϊ��%d\n",other);	
	}