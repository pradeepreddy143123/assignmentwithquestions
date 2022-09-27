#include<stdio.h>
int main()
{
int i=1,n,a,sum=0,count=0;
printf("enter the number of values");
scanf("%d",&n);
printf("enter the first value");
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
printf("sum of positive numbers %d=%d\n",count,sum);
return 0;
}
