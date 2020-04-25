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
	printf("大写字母个数为：%d\n ",daxie);
	printf("小写字母个数为：%d\n",xiaoxie);
	printf("空格个数为：    %d\n",blank);
	printf("数字个数为：    %d\n",num);
	printf("其他字符个数为：%d\n",other);	
	}