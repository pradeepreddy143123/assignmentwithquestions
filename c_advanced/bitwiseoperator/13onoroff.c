#include<stdio.h>
int main()
{
int x,n;
printf("enter a num\n");
scanf("%d%d",&x,&n);
if(x&(0x01<<n))
{
printf("on");}
else
{
printf("off");
}
}
