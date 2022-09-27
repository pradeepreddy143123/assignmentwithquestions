#include<stdio.h>
int main()
{
int i=1,n,a,sp=0,sn=0,count=0,count1=0;
printf("enter a number of values");
scanf("%d",&n);
printf("enter the first value");
while(i<=n)
{
scanf("%d",&a);
if(a>0)
{
sp=sp+a;
count++;
}
else if(a<0)
{
sn=sn+a;
count1++;
}
i++;
}
printf("sum of +ve %d=%d\n",count,sp);
printf("sum of -ve %d=%d\n",count1, sn);
return 0;
}
