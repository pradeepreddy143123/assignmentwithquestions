#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d",&a);
d=a%10;
a=a/10;
c=a%10;
a=a/10;
b=a%10;
a=a/10;
printf("%d",d*1000+c*100+b*10+a);
return 0;
}
