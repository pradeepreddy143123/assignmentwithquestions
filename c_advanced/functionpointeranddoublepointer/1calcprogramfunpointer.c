//1)Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.\\

#include<stdio.h>
int add(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int mul(int a,int b)
{
return a*b;
}
int div(int a,int b)
{
return a/b;
}


int main()
{
int a,b;
int (*p)(int,int);
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
p=add;
printf("add:%d",p(a,b));
p=sub;
printf("sub:%d",p(a,b));
p=mul;
printf("mul:%d",p(a,b));
p=div;
printf("div:%d",p(a,b));
}
