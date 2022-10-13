#include<stdio.h>
int a,b;

int add()
{
int c;
c=a+b;
return c;
}


int sub()
{
int c1;
c1=a-b;
return c1;
}


int mul()
{
int c2;
c2=a*b;
return c2;
}

int div()
{
int c3;
c3=a/b;
return c3;
}

int main()
{
int c,c1,c2,c3;
char ch;

scanf("%d %c%d",&a,&ch,&b);
switch (ch)
{
case '+' : c=add();
           printf("%d",c);  
           break;
case '-' : c1=sub();
           printf("%d",c1);
           break;
case '*' : c2=mul();
           printf("%d",c2);
           break;
case '/' : c3=div();
           printf("%d",c3);
           break;
}
}

