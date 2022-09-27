#include<stdio.h>
int main()
{
int i=0,n=1,a,b;
printf("enter two  numbers base=a, power=b");
scanf("%d%d",&a,&b);
while(i<b)
{
n=n*a;
i++;
}
printf("%d",n);
return 0;
}
