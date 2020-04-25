#include <stdio.h>
#include <cstdlib>
int main()
{
	double ma,fa,a,b,c,d,e,f,g,h,w,r,t;
	
	printf("请输入父母的身高来预测下一代的身高\n请输入父亲的身高：");
	scanf("%lf",&fa);
	printf("请输入母亲的身高：") ;
	scanf("%lf",&ma);
	
	a=0.54*(ma+fa);//男孩 
	b=(fa*0.923+ma)/2;//女孩 
	
	c=a*(1.015+0.02);//男孩 1 1 
	d=1.02*a;//男孩 1 0 
	e=1.015*a;//男孩 0 1 
	
	f=b*(1.015+0.02);
	g=1.02*b;
	h=1.015*b;
	
	printf("请选择下一代性别：男性（输入1）女性（输入0）\n");
	scanf("%lf",&w)	;
	printf("您的孩子是否喜爱体育锻炼:是（输入1）否（输入0）\n");
	scanf("%lf",&r);
	printf("您的孩子是否有良好的卫生饮食习惯：是（输入1）否（输入0）\n");
	scanf("%lf",&t) ;
	if	   (w==1&&r==1&&t==1)		printf("您孩子预测身高为\n%lfcm",c);  
	else if(w==1&&r==1&&t==0)		printf("您孩子预测身高为\n%lfcm",d);
	else if(w==1&&r==0&&t==1)		printf("您孩子预测身高为\n%lfcm",e);
	else if(w==1&&r==0&&t==0)		printf("您孩子预测身高为\n%lfcm",a);
	
	else if(w=0&&r==1&&t==1)		printf("您孩子预测身高为\n%lfcm",f);
	else if(w==0&&r==1&&t==0)		printf("您孩子预测身高为\n%lfcm",g);
	else if(w==0&&r==0&&t==1)		printf("您孩子预测身高为\n%lfcm",h);
	else if(w==0&&r==0&&t==0)		printf("您孩子预测身高为\n%lfcm",b);
	else							printf("输入错误,请检查！\n");
	system("pause"); 
	return 0;
} 