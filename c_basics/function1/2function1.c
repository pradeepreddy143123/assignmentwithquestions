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
int mod(int a,int b)
{
    return a%b;
}
int main()
{
int a,b;
char c;
printf("enter a number");
scanf("%d%c%d",&a,&c,&b);
switch(c)
{
case '+':printf("%d",add(a,b));
         break;
case '-':printf("%d",sub(a,b));
         break;
case '*':printf("%d",mul(a,b));
         break;
case '/':printf("%d",div(a,b));
         break;
case '%':printf("%d",mod(a,b));
         break;
}
return 0;
}
