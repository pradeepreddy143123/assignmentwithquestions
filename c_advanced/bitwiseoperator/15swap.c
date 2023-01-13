#include<stdio.h>
int main()
{
int a,b,k;
printf("enter a number");
scanf("%d%d",&a,&b);
k=(a^b)^a;
b=(a^b)^b;
printf("%d%d",k,b);
}

