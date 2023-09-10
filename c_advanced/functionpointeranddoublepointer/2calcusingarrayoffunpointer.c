//2)Rewrite the calculator program using array of function pointers.\\



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
int (*p[4]) (int,int);
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
p[0]=add;
printf("add:%d",p[0] (a,b));
p[1]=sub;
printf("sub:%d",p[1] (a,b));
p[2]=mul;
printf("mul:%d",p[2] (a,b));
p[3]=div;
printf("div:%d",p[3] (a,b));
}
