#include<stdio.h>
#include<cstdlib>
int main()
{ 
	printf("将为您求出a,b,c的对手是谁\n");
	system("pause");
	char i,j,k,x,y,z;
	for(i='x';i<='z';i++)
		{for(j='x';j<='z';j++)
			{  for(k='x';k<='z';k++)
			   if(i!='x'&&k!='x'&&k!='z'&&i!=j&&i!=k&&j!=k)
			   {printf("a的对手为%c\nb的对手为%c\nc的对手为%c\n",i,j,k);}
			}
		}
system("pause");
return 0;
}
