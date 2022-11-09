#include<stdio.h>
#define MAX(a,b)(a>b)

int main()
{
int a,b;
printf("enter a number\n");
scanf("%d%d",&a,&b);
if(MAX(a,b))
{
printf("a is big=%d\n",a);
}
else
{
printf("b is big=%d\n",b);
}
}

