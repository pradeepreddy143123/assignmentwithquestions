#include<stdio.h>
int main()
{
int x;
printf("enter a num\n");
scanf("%d",&x);
if(x && !(x&(x-1)))
{
printf("%d=power of 2",x);
}
else
{
printf("%d=power of not 2",x);
}
}
