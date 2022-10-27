#include<stdio.h>
int main()
{
int a=10,b=20,*p1,*p2;
p1=&a;
*p1=a;
p2=&b;
*p2=b;
printf("%d\n",*p1+*p2);
}
