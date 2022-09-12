#include<stdio.h>
int main()
{
int a;
scanf("%4d",&a);
printf("%d\n%d\n%d\n%d\n",a%10000/1000,a%10000/100,a%10000/10,a%10000);
return 0;
}
