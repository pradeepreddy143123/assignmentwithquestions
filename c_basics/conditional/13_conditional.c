#include<stdio.h>
int main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if(c<='Z')
{
if(c>='A')
{
printf("%c",c+32);
}
}
if(c>='a')
{
if(c<='z')
{
printf("%c",c-32);
}
}
else
printf("invalid operation");
return 0;
}
