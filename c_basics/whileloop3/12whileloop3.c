#include<stdio.h>
int main()
{
int i,a=0,b=1,c,n;
printf("enter a numbers");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=a+b;
b=a;
a=c ;
printf(" %d",c);
}
}

