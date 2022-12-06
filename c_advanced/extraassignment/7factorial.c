#include<stdio.h>
int fact(int n);
int main()
{
int n,i,b;
float sum=0,a;
printf("enter a num\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=fact(i);
if(i%2==1)
{
sum=sum+1.0/a;
printf("1/%d! -",i);
}
else
{
sum=sum-1.0/a;
printf("1/%d! +",i);
}
}
printf("=%f",sum);
}



int fact(int n)
{
int b=1;
while(n>0)
{
b=b*n;
n--;
}
return b;
}

