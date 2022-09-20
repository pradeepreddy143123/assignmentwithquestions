#include<stdio.h>
int main()
{
int a;
scanf("%4d",&a);
printf("%d\n%d\n%d\n%d\n",a%10,a%100/10,a%1000/100,a%10000/1000);
return 0;
}
