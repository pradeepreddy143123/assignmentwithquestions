#include<stdio.h>
char * mystrchr(char s[],char c)
{
char *r=s;
for(;*s;s++)
{
if(*s==c)
{
return s;
}
}
}


int main()
{
char c;
char s[100];
printf("enter the input value of a string\n");
scanf("%s",s);
printf("enter a character to search");
scanf(" %c",&c);
char *d=mystrchr(s,c);
printf("%p",d);
}

