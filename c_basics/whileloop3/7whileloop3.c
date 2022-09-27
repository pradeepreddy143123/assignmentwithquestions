#include<stdio.h>
int main()
{
int i,j,n,a=1;
printf("enter n number\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=n;j>=i;j--)
{
printf(" %d",a);
a++;
}
printf("\n");
}
}

