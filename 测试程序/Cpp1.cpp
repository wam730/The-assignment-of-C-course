#include<stdio.h>
int main()
{
 int i,j,tmp;
 int a[3][3]={2,4,5,6,7,8,11,24,56};
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
	if(j>i)
	{tmp=a[i][j];
     a[i][j]=a[j][i];
     a[j][i]=tmp;}
    

    
  }
 }
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   
   printf("%d ",a[i][j]); 
  }
  printf("\n");
 } 
 
return 0;
}