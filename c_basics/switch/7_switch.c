#include<stdio.h>
int main()
{
char c;
printf("enter a alphabet");
scanf(" %c",&c);
switch((c<='z'&&c>='a') || (c<='Z'&&c>='A'))
{
case 1:printf("it is alphabet\n");
       break;
default:
case 0:printf("not alphabet\n");
       break;
return 0;
}
}
