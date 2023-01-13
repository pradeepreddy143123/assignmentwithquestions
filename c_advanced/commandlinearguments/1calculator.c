#include<stdio.h>

int atoi(char argv[]);
int main(int argc,char *argv[])
{
int a,b;
char c;
a=atoi(argv[1]);
b=atoi(argv[3]);
c=argv[2][0];
switch(c)
{
case '+':printf("%d",a+b);break;
case '-':printf("%d",a-b);break;
case '*':printf("%d",a*b);break;
case '/':printf("%d",a/b);break;
default:
	break;
}
}

int atoi(char argv[])
{
int i,n,sum=0;
for(i=0;argv[i]!=0;i++)
{
n=argv[i]-48;
sum=sum*10+n;
}
return sum;
}
