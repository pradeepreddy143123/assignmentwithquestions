#include<stdio.h>
int a,b,d;
char c;
int add(int a,int b)
{
d=a+b;
}

int sub(int a,int b)
{
d=a-b;
}

int mul(int a, int b)
{
d=a*b;
}

int div(int a, int b)
{
d=a/b;
}

int main()
{
printf("enter a number");
scanf("%d %c%d",&a,&c,&b);
switch(c)
{
case '+':add(a,b);
         printf("%d",d);
         break;
case '-':sub(a,b);
         printf("%d",d);
         break;
case '*':mul(a,b);
         printf("%d",d);
         break;
case '/':div(a,b);
         printf("%d",d);
         break;
}
}
