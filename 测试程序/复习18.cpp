#include<stdio.h>		
#include<cstdlib>
int sushu(int a);
int main()
{
	//�������ǳ���1�������������û������Լ��������
	////�����ж��Ƿ��������������ô�2��ʼ������������������þ�������������һֱ����ǰһ����û��������Ϊ����////
	int y;
	printf("������һ���������� ");
	scanf("%d",&y);
	sushu(y);
	if(sushu(y)==0)					printf("\n %d ��������,�Ǻ�����\n",y);
	else if(sushu(y)==-1)			printf("\n %d �Ȳ�������Ҳ���Ǻ�����\n",y);
	else if(sushu(y)==1)			printf("\n %d ��������\n");
	else
	system("pause");
	return 0;
}
int sushu(int a)
{
	int i,temp,x;
	if(a<=1)
	{
		x=-1;
	}
	else	
	{
		for(i=2;i<a;i++)
		{
			temp=a%i;
			if(temp==0) 
			{
				x=0;
				break;
			}
			else if(temp!=0)
			{
				x=1;
				continue;
			}	
		}
	}
	return x;
}
