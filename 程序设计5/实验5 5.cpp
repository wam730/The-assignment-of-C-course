#include<stdio.h>
#include<cstdlib>
#include<string.h>
int main(void)
{
	char test[100000],c;
	int i,capital=0,low=0,blank=0,num=0,other=0,n=0,word=0;
    printf("�������ı�:\n");
	gets(test);
	for(i=0; (c=test[i])!='\0'; i++) 
	{
		if(c>=65&&c<=90)
		{
			capital++ ;
		}
		else if(c>=97&&c<=122)
		{
			low++ ;
		}
		else if(c>=48&&c<=57)
		{
			num++;
		}
		else if(c==' ')
		{
			blank++;
		}
		else
		{
			other++;
		}

	}
		for(i=0; (c=test[i])!='\0'; i++) 
		{
			if (c==' ')		
			{	
				word=0;
			}	
			else			
			{
				if (word==0)
				{	
					word=1;		
					n++;
				}
			}
		}
	printf("\n");
	printf("�ַ�ͳ�����£�\n");
	printf("��������Ϊ��%d\n",n);
	printf("��д��ĸ����Ϊ��%d\n",capital);
	printf("Сд��ĸ����Ϊ��%d\n",low);
	printf("���ָ���Ϊ��%d\n",num);
	printf("�ո����Ϊ��%d\n",blank);
	printf("�����ַ�����Ϊ��%d\n",other);
	printf("�ı��ַ�����Ϊ��%d\n",strlen(test));
	system("pause");
    return 0;
}