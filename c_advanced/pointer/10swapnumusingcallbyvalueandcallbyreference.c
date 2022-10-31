#include<stdio.h>
void swapcall(int a,int b)

{

int temp=0;
temp=a;
a=b;
b=temp;
}

int swapref(int *p1,int *p2)
{
int temp=0;
temp=*p1;
*p1=*p2;
*p2=temp;
}

int main()
{
int a,b,*p1,*p2;
printf("enter a number\n");
scanf("%d%d",&a,&b);
p1=&a;
p2=&b;
swapcall(a,b);
printf("%d%d",a,b);
swapref(&a,&b);
printf("%d%d",*p1,*p2);
}
