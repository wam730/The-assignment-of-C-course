
#include <stdio.h>
#include <cstdlib>
int main()
{
	long int n,i,x=1,a;
	printf("本程序将为您解决如下问题：猴子第一天摘下若干个桃子，当天吃一半又多吃1个；\n第二天将剩下的桃子吃一半又多吃1个；以后每天都将前一天剩下的桃子吃一半又多吃1个。\n到第n天只剩下1个桃子，求第一天猴子摘了几个桃子？\n请输入n的值:");
	scanf("%d",&n);
	if(n<=30)
	{		for(i=2;i<n;i++)
	{		x=(x+1)*2;}
			printf("第一天摘了%d个桃子！\n",a=(x+1)*2);}
	else	printf("请输入小于31的整数！\n");
	system("pause");
	return 0;
}

