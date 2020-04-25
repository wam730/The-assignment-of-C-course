#include<stdio.h>		
#include<cstdlib>
int main()
{
	////最小公倍数即两个数最小的倍数，如8、16最小公倍数为16
	////最大公约数即两个数最大的公共约数
	//用辗转相除法来求最大公约数，两个数相除得余数，再用较小的两个数再次相除得余数，直到余数为0为止
	//最小公倍数=两个数相乘/最大公约数
	////函数放后面要声明
	int a,b;
	int gongyueshu(int x,int y);
	int gongbeishu(int q,int w);
	printf("请输入两个正整数：");
	scanf("%d %d",&a,&b);
	printf("\n最大公约数为：%d\n",gongyueshu(a,b));
	printf("最小公倍数为：%d\n\n",gongbeishu(a,b));
	system("pause");
	return 0;
}
int gongyueshu(int x,int y)
{
	int temp;
	if(x<y)							//将大数保存在x里
	{
		temp=x;
		x=y;
		y=temp;
	}
	
	while(y!=0)						//当较小的数（即余数，余数不会大于原来两个数的）不等于0，则继续除，直到余数等于0
	{	
		temp=x%y;					//将余数保存在较小的数中
		x=y;						//先将余数保存在temp中，然后将y换到较大的值x
		y=temp;						//再让y=余数
	}
	return x;
}
int gongbeishu(int x,int y)
{
	int gys;						//最小公倍数=两个数相乘/最大公约数
	gys=x*y/gongyueshu(x,y);
	return gys;
}