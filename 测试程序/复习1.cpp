#include<stdio.h>
#include<cstdlib>
#define pi 3.1415926
int main()
{
	float r,h,s,v;
	printf("please input r & h\n");
	printf("r=");
	scanf("%f",&r);
	printf("h=");
	scanf("%f",&h);
	printf("s=%.3f\n",s=2.0*pi*r*r+2.0*pi*r*h);
	printf("\nv=%.3f\n",v=pi*r*r*h);
	system("pause");
	return 0;
}
