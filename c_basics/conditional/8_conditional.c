#include<stdio.h>
int main()
{
int a,b;
char c;
printf("enter the two numbers");
scanf("%d%c%d",&a,&c,&b);
if(c=='+')
{
printf("%d",a+b);
}
else if(c=='-')
{
printf("%d",a-b);
}
else if(c=='*')
{
printf("%d",a*b);
}
else if(c=='/')
{
printf("%d",a/b);
}
else if(c== '%')
{
printf("%d",a%b);
}
else
{
printf("please enter valid operator %c",c);
}
return 0;
}

