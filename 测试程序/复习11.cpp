#include<stdio.h>
#include<cstdlib>
#define pi 3.1415926
int main()
{
	//�ֱ���abc�Ķ��ֶ���xyz���������������жϣ�����a,for��i=��x����i����z������
	//�������׽�ȥ������i��=x��
	////�Դ����ƣ�ѭ��Ƕ�ף�
	////���ע��abc���ֲ����ظ���a�Ķ���i����Ϊj��k���Դ����ƣ�
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
					printf("a�Ķ�����%c\n\nb�Ķ�����%c\n\nc�Ķ�����%c\n\n",i,j,k);
				}
			}
		}
	}
	system("pause");
	return 0;
}
