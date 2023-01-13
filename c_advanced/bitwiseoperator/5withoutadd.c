#include<stdio.h>
int main()
{
int a,b,sum,carry=b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
while(carry!=0)
{
sum=a^b;
carry=(a&b)<<1;
a=sum;
b=carry;
}
printf("%d",sum);
return 0;
}

