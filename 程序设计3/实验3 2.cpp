#include <stdio.h>
#include <cstdlib>
int main()
{
	double ma,fa,a,b,c,d,e,f,g,h,w,r,t;
	
	printf("�����븸ĸ�������Ԥ����һ�������\n�����븸�׵���ߣ�");
	scanf("%lf",&fa);
	printf("������ĸ�׵���ߣ�") ;
	scanf("%lf",&ma);
	
	a=0.54*(ma+fa);//�к� 
	b=(fa*0.923+ma)/2;//Ů�� 
	
	c=a*(1.015+0.02);//�к� 1 1 
	d=1.02*a;//�к� 1 0 
	e=1.015*a;//�к� 0 1 
	
	f=b*(1.015+0.02);
	g=1.02*b;
	h=1.015*b;
	
	printf("��ѡ����һ���Ա����ԣ�����1��Ů�ԣ�����0��\n");
	scanf("%lf",&w)	;
	printf("���ĺ����Ƿ�ϲ����������:�ǣ�����1��������0��\n");
	scanf("%lf",&r);
	printf("���ĺ����Ƿ������õ�������ʳϰ�ߣ��ǣ�����1��������0��\n");
	scanf("%lf",&t) ;
	if	   (w==1&&r==1&&t==1)		printf("������Ԥ�����Ϊ\n%lfcm",c);  
	else if(w==1&&r==1&&t==0)		printf("������Ԥ�����Ϊ\n%lfcm",d);
	else if(w==1&&r==0&&t==1)		printf("������Ԥ�����Ϊ\n%lfcm",e);
	else if(w==1&&r==0&&t==0)		printf("������Ԥ�����Ϊ\n%lfcm",a);
	
	else if(w=0&&r==1&&t==1)		printf("������Ԥ�����Ϊ\n%lfcm",f);
	else if(w==0&&r==1&&t==0)		printf("������Ԥ�����Ϊ\n%lfcm",g);
	else if(w==0&&r==0&&t==1)		printf("������Ԥ�����Ϊ\n%lfcm",h);
	else if(w==0&&r==0&&t==0)		printf("������Ԥ�����Ϊ\n%lfcm",b);
	else							printf("�������,���飡\n");
	system("pause"); 
	return 0;
} 