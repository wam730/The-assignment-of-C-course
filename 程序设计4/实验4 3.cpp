#include<stdio.h>
#include<cstdlib>
int main()
{
	double n,a=3.0,a1=1.0,a2=2.0,b1=2.0,b2=3.0,b=5.0,i=0,an,sn=0,sum;
	printf("���潫Ϊ���������е�ǰn��ĺ�\n������n��ֵ��");
	scanf("%lf",&n);
	if(n==1)				printf("���еĵ�1���Ϊ��2.000000\n");
	else if(n==2)			printf("���е�ǰ2���Ϊ��3.500000\n");
	else if(n==3)			printf("���е�ǰ3���Ϊ��5.166666\n");
	else if(n>=4&&n<1476)	
							{printf("a1=2/1\na2=3/2\na3=5/3\n");
							while(i<n-3)																	/*˼·���ȶ���������ĸ��ǰ3�Ȼ�����ΰ�
																											ÿһ������ƶ�һλ���õ����ӷ�ĸ�������*/
							{a1=a2;
							a2=a;
							a=a1+a2;																		//ÿһ��ķ���
							b1=b2;						
							b2=b;
							b=b1+b2;																		//ÿһ��ķ�ĸ
							an=b/a;																			//��n��
							sn=sn+an;																		//�ӵ�4�����ÿһ��ĺ�
							printf("a%.0lf=%.0lf/%0.lf\n",i+4,b,a);
							i++;}
							printf("***   ���е�ǰ%0.0lf���Ϊ:%lf   ***\n",n,sum=sn+(31.00/6.00));}		//ǰn��ĺͣ�n>=4��ʱ��
	else if(n>=1476)		printf("���ݹ������������룡\n");	
	else					printf("����������飡\n");
							printf("powered by Wang Yujie\nThank you for using\n");
	system ("pause");
	return 0;
}
