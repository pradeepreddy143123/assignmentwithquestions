#include<stdio.h>
int main()
{
int num,i,count=1;
printf("enter a number");
scanf("%d",&num);
i=1;
while(i<=num/2)
{
if(i%2==0)
count=0;
i++;
}
{
if(num%i==0)
{
printf(" prime number");
}
else
printf("not prime number");
}
return 0;
}
