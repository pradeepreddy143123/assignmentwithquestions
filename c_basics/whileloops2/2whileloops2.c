#include<stdio.h>
int main()
{
int n,num=1;
int sum=0;
printf("enter a number");
scanf("%d",&n);
while(num<=n)
{
  sum+=num;
  num++;
}
printf("sum of serial numbers %d=%d\n",n,sum);
return 0;
}
