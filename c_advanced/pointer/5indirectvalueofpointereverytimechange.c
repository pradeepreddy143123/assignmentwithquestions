#include<stdio.h>
int main()
{
int x=10,*p1,*p2,*p3;
p1=&x;
p2=&x;
p3=&x;
printf("%d\n%d\n%d\n",*p1,*p2,*p3);
 x=20;
printf("%d\n%d\n%d\n",*p1,*p2,*p3);
x=30;
x=*p1+1;
printf("%d\n%d\n",x,*p1);
x=*p2+2;
printf("%d\n%d\n",x,*p2);
x=*p3+3;
printf("%d\n%d\n",x,*p3);
}
