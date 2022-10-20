#include<stdio.h>
int mystrlen(char str[])
{
int i;
for(i=0;str[i]!=0;i++)
printf("%d",i);
}


int main()
{
int i;
char str[]={"pradeep"};
mystrlen(str);
}
