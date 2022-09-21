#include<stdio.h>
int main()
{
int a;
printf("enter a number");
scanf("%d",&a);
switch(a%2==0)
{
case 1:printf("even");
       break;
case 0:printf("odd");
       break;
return 0;
}
}
