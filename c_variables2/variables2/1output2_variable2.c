#include<stdio.h>
int main()
{
int a;
scanf("%4d",&a);
printf("%d\n%d\n%d\n%d\n",a%10000/1000,a%1000/100,a%100/10,a%10);
return 0;
}
