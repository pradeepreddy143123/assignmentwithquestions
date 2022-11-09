#include<stdio.h>
int mystrlen(char s[])
{
int i=0;
while(*s)
{
i++;
s++;
}
return i;
}
int main()
{
int a;
char s[100]={"pradeep"};
a=mystrlen(s);
printf("%d\n",a);
}
