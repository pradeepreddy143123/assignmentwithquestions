#include<stdio.h>
int main()
{
int i=1,n,a, sum=0,count=0,avg;
printf("enter a number of values");
scanf("%d",&n);
printf("enter the first values");
while(i<=n)
{
scanf("%d",&a);
if(a>0)
{
sum+=a;
count++;
}
else
break;
i++;
}
avg=sum/count;
printf("sum of positive numbers %d=%d\n avg of %d\n",count,sum,avg);
return 0;
}
