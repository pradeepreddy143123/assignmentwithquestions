#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
i=n%10;
sum+=i;
n/=10;
}
printf("sum of digits =%d\n",sum);
return 0;
}

