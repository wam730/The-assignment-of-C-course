#include<stdio.h>		
#include<cstdlib>
int main()
{
	////��С����������������С�ı�������8��16��С������Ϊ16
	////���Լ�������������Ĺ���Լ��
	//��շת������������Լ������������������������ý�С���������ٴ������������ֱ������Ϊ0Ϊֹ
	//��С������=���������/���Լ��
	////�����ź���Ҫ����
	int a,b;
	int gongyueshu(int x,int y);
	int gongbeishu(int q,int w);
	printf("������������������");
	scanf("%d %d",&a,&b);
	printf("\n���Լ��Ϊ��%d\n",gongyueshu(a,b));
	printf("��С������Ϊ��%d\n\n",gongbeishu(a,b));
	system("pause");
	return 0;
}
int gongyueshu(int x,int y)
{
	int temp;
	if(x<y)							//������������x��
	{
		temp=x;
		x=y;
		y=temp;
	}
	
	while(y!=0)						//����С�������������������������ԭ���������ģ�������0�����������ֱ����������0
	{	
		temp=x%y;					//�����������ڽ�С������
		x=y;						//�Ƚ�����������temp�У�Ȼ��y�����ϴ��ֵx
		y=temp;						//����y=����
	}
	return x;
}
int gongbeishu(int x,int y)
{
	int gys;						//��С������=���������/���Լ��
	gys=x*y/gongyueshu(x,y);
	return gys;
}