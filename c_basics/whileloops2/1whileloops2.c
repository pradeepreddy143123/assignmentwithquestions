#include<stdio.h>
int main()
{
int n,num;
int fact=1;
printf("enter a number");
scanf("%d",&n);
num=n;
if(n<0)
printf("no factorial of negative number\n");
else
{
while(n>1)
{
fact*=n;
n--;
}
printf("factorial of %d=%d\n",num,fact);
}
return 0;
}
