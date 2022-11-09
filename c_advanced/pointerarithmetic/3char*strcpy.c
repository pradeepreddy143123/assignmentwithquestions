#include<stdio.h>
char *strcpy(char d[],char s[])
{
char *r=d;
while(*s)
{
*d=*s;
d++;
s++;
}
*d='\0';
return r;
}

int main()
{
char s[100]={"pradeep"};
char d[100];
strcpy(d,s);
printf("%s",d);
}
