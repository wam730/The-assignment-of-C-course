#include<stdio.h>
#include<cstdlib>
#include<string.h>
int main(void)
{
	char test[100000],c;
	int i,capital=0,low=0,blank=0,num=0,other=0,n=0,word=0;
    printf("请输入文本:\n");
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
	printf("字符统计如下：\n");
	printf("单词总数为：%d\n",n);
	printf("大写字母个数为：%d\n",capital);
	printf("小写字母个数为：%d\n",low);
	printf("数字个数为：%d\n",num);
	printf("空格个数为：%d\n",blank);
	printf("其他字符个数为：%d\n",other);
	printf("文本字符总数为：%d\n",strlen(test));
	system("pause");
    return 0;
}