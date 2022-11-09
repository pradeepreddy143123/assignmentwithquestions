#include<stdio.h>
#define ALPHANUM(ch) (ch>='A'&&ch<='Z' ||ch>='a'&&ch<='z'||ch>='0'&&ch<='9')
int main()
{
char ch;
printf("enter a number\n");
scanf("%c",&ch);
if(ALPHANUM(ch))
{
printf("it is alphanumeric=%c",ch);
}
else
{
printf("not alphanumeric");
}
}
