#include<stdio.h>
int main()
{
int i=1,n,sum=0,a;
printf("enter a number");
scanf("%d",&n);
scanf("%d",&a);
while(i<=n)
{
sum=sum+a;
i++;
}
printf("%d",sum);
return 0;
}
