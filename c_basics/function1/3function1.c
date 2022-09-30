#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a number");
scanf("%d%d",&a,&b);
swap(a,b);
}
int swap(int a,int b)
{
int c;
c=a;
a=b;
b=c;
printf("%d\n%d\n",a,b);
}
