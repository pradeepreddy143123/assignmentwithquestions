#include<stdio.h>
int main()
{
int rev,rem,a;
printf("enter a number");
scanf("%d",&a);
for(rev=0;a!=0;a=a/10)
{
rem =a%10;
rev=(rev*10)+rem;
}
printf("%d",rev);
return 0;
}
