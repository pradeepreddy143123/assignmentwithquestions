#include<stdio.h>
int mystrlen(char []);
void mystrcat(char d[],char s[])
{
int i,n,j;

i=mystrlen(d);
printf("i=%d\n",i);
for(i,j=0;s[j]!=0;i++,j++)
{
d[i]=s[j];
}
d[i]=0;
}
int main()
{
char s[100]={"reddy"};
char d[100]={"pradeep"};
mystrcat(d,s);
printf("%s",d);
}


int mystrlen(char d[])
{
int c=0,i;
for(i=0;d[i]!=0;i++)
c++;
return c;
}
