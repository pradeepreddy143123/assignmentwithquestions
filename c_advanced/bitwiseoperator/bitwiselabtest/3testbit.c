#include<stdio.h>
int main()
{
int n,p;
printf("enter a number\n");
scanf("%d",&n);
printf("enter the position\n");
scanf("%d",&p);
if(p>=0&&p<=15)
{
if(n&(0x01<<p))
{
printf("true\n");
}
else
{
printf("false\n");
}
}
}
