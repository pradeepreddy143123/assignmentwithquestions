#include<stdio.h>
int a,b,d;
char c;
int add()
{
d=a+b;
}

int sub()
{
d=a-b;
}

int mul()
{
d=a*b;
}

int div()
{
d=a/b;
}

int main()
{
scanf("%d %c%d",&a,&c,&b);
switch (c)
{
case '+':add();
         printf("%d",d);
         break;
case '-':sub();
         printf("%d",d);
         break;
case '*':mul();
         printf("%d",d);
         break;
case '/':div();
         printf("%d",c);
}
}
