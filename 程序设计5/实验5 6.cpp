#include<stdio.h>
#include<cstdlib>
#include<string.h>
int main()
{
	char s1[36] = "a123b345c4m935689dsdfm93rmnwm93e4kr",s2[] = "m93", s3[100];
	int tmp,i = 0,j = 0,start = 0;
	for(i = 0; i<100; i++)
		{
			if(s1[i] == s2[0])
			{
				if(s1[i+1] == s2[1])
				{
					if(s1[i+2] == s2[2])
					{
						start++;
						continue;
					}
					else{
							continue;
						}
				}
				else{
						continue;
					}
			}
		  	else
			{
				continue;
			}
		}
	
	for(i = 0; i < 36; i++)
		{
			if(s1[i] == s2[0])
			{
				if(s1[i+1] == s2[1])
				{
					if(s1[i+2] == s2[2])
					{
						s3[i]  = ' ' ;
						s3[i+1]= ' ' ;
						s3[i+2]= ' ' ;
						s3[i+3]=s1[i+3];
						i=i+3; 
						continue;                                                                                                                                                                                                                                                                                                                                                            
					}
					else{
							s3[i] = s1[i];
						}
				}
				else{	s3[i] = s1[i];
					}
			}
		  	else
			{
				s3[i] = s1[i];
			}
		}
	printf("������Ҫ����������\n");
	printf("s1��s2���ڵĴ���Ϊ��%d\n",start);
    printf("s1�ı��ַ�����Ϊ��%d\n",strlen(s1));
    printf("s2�ı��ַ�����Ϊ��%d\n",strlen(s2));
	printf("��s2�ı���s1��ɾ����ɾ�������ÿո�ָ���%s\n",s3);	
	strcat(s3,s2);
	printf("��s2�ı�������s3֮��%s\n",s3);
	for(i = 0; i <= 34; i++)
		{
			for(j = i+1; j <= 35; j++)
			{
				if(s1[i] > s1[j])
				{ 
					tmp  = s1[i];
					s1[i] = s1[j];
					s1[j] = tmp;
				}
			}	
		}
	
	printf("�����s1����\n");	
	for(i=0;i<=35;i++) printf("%-2c ",s1[i]);
	printf("\n");
	system("pause");
    return 0;
}
