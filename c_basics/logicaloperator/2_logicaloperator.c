#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter a number");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
{
printf("%d a is bigger",a);
}
else if(b>c && b>d)
{
printf("%d b is bigger",b);
}
else if(c>d)
{
printf("%d c is bigger",c);
}
else
printf("%d d is bigger",d);
return 0;
}
