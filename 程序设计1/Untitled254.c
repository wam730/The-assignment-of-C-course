#include<stdio.h>
#include <math.h> 
int main()
{double a,b,c,disc,X1,X2,p,q;
scanf("%lf%lf%lf",&a,&b,&c);
disc=b*b-4*a*c;
p=-b/(2.0*a);
q=sqrt(disc)/(2.0*a);
X1=p+q,X2=p-q;
printf("X1=%7.2f\nX2=%7.2f\n",X1,X2) ;
system("pause");
return 0;
}

