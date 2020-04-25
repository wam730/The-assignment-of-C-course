#include<stdio.h>
#include<string.h>
#include<cstdlib>
void word(char s[200])
{
    int a[2000]={0},i,j=0,t,max=0,l=0,k=0,m=0;
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			j++;
		}
		else
		{
			a[j]++;
            m++;
		}
	}
	t=0;
	for(i=0;i<m;i++)
	{
		if(a[i]>t)
		{
			t=a[i];
			l=i+1;
		}
	}
	printf("The No.%d is the longest word , lenth is %d.\n",l,t);
      for(j=0;j<l-1;j++)
	   {
		   k=k+a[j]+1;
	   }
	printf("This word is : \n");
	for(i=k;i<=k+t;i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
}
int main()
{
	char s[2000];
	printf("please input the text : \n");
	gets(s);
	printf("\n\n");
	word(s);
	system("pause");
	return 0;
}