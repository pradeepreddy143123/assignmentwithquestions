#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a number");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d a is bigger ",a);
}
else if(b>c)
{
printf("%d b is bigger",b);
}
else
printf("%d c is bigger",c);
return 0;
}
