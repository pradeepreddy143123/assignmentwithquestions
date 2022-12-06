#include<stdio.h>
int main()
{
int b,n,s,a,i;
printf("enter a num\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a);
if(i==0)
{
b=a;
s=a;
}
if(a>b)
{
b=a;
}
if(a<s)
{
s=a;
}
}
printf("%d=big",b);
printf("%d=small",s);
}

