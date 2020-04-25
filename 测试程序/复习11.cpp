#include<stdio.h>
#include<cstdlib>
#define pi 3.1415926
int main()
{
	//分别设abc的对手都是xyz，按照条件进行判断，比如a,for（i=‘x’；i＜‘z’），
	//将条件套进去，不如i！=x；
	////以此类推，循环嵌套；
	////最后注意abc对手不能重复即a的对手i不能为j，k；以此类推；
	char i,j,k;
	char x,y,z;
	for(i='x';i<='z';i++)
	{
		for(j='x';j<='z';j++)
		{
			for(k='x';k<='z';k++)
			{
				if(i!='x' && k!='x' && k!='z' && i!=j && i!=k && j!=k)			//important
				{
					printf("a的对手是%c\n\nb的对手是%c\n\nc的对手是%c\n\n",i,j,k);
				}
			}
		}
	}
	system("pause");
	return 0;
}
