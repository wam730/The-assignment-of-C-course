#include<stdio.h>
#include<cstdlib>
#define pi 3.1415926
int main()
{
	//思路：完数，即一个数把他的所有约数加起来等于这个数，所以先求这个数的约数；
	////约数，则用小于这个数的数依次除，余数为0则为他的约数，一直到他本身为止；
	//为了打印规定范围的完数，则要把这个范围内的所有数都求一次约数，每次把约数相加，如果等于本身，则保留；
	////每次将约数保留在s中，要记得一个数判断完后，清零，即s=0；
	////不要把第二个if放在第二个for循环中，比如24=1+2+3+4+6+8，这个时候也判断s==j，则结果不正确，因为24还有12这个约数；
	//下面吧它写成加的格式，如6=1+2+3；
	////则再把约数打一次就好，然后写成+d的格式就好了；
	////因为1已经写好，所以j得从2开始，因为1前面没有+，所以1就得先打印出来；
	////记住是j<i，打错了结果就错了；
	////打印/n的语句不要放在第四个for语句里面；
	int i,j,s,n;
	printf("Please input a number n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=0;
		for(j=1;j<i;j++)				//
		{
			if(i%j==0)
			{
				s=s+j;	
			}
		}
		if(s==i)						//
			{
				printf("%d=1",i);
				for(j=2;j<i;j++)		//
				{
					if(i%j==0)
					{
						printf("+%d",j);
					}
				}
				printf("\n");			//
			}	
	}	
	system("pause");
	return 0;
}
