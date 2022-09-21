#include<stdio.h>
int main()
{
int a,b;
printf("enter a number");
scanf("%d%d",&a,&b);
switch(a>b)
{
case 0:printf("%d b is bigger",b);
       break;
case 1:printf("%d a is bigger",a);
       break;
return 0;
}
}
