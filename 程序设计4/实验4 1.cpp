#include <stdio.h>
#include <cstdlib>
int main()
{
	int i,j,k, s, n; 
	printf("���ǽ�Ϊ���ӡ��涨��Χ�ڵ�������\n");
	printf("��������ѡ��Χ���ޣ�\n");
	scanf("%d", &n); 
	for( i=1; i<=n; i++ )
	{
		s=0;
		for( j=1; j<i; j++)
		{
			if(i%j == 0)	
				{
					s=s+j;
				}
		}				
		if(s == i)
			{
				printf("%d=1",i);
				for(j=2;j<i;j++)
				{
					if(i%j==0)		
					{
						printf("+%d",j); 
					}
				}	
				printf("\n");
			}
	}
system("pause");
return 0;
}
