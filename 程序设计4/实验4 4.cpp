#include<stdio.h>
#include<cstdlib>
int main()
{ 
	printf("��Ϊ�����a,b,c�Ķ�����˭\n");
	system("pause");
	char i,j,k,x,y,z;
	for(i='x';i<='z';i++)
		{for(j='x';j<='z';j++)
			{  for(k='x';k<='z';k++)
			   if(i!='x'&&k!='x'&&k!='z'&&i!=j&&i!=k&&j!=k)
			   {printf("a�Ķ���Ϊ%c\nb�Ķ���Ϊ%c\nc�Ķ���Ϊ%c\n",i,j,k);}
			}
		}
system("pause");
return 0;
}
