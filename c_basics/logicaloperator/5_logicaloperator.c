#include<stdio.h>
int main()
{
char c;
printf("enter a alphabet");
scanf("%c",&c);
if(c<='z' && c>='a')
{
printf("it is alphabet");
}
else if(c<='Z' && c>='A')
{
printf("it is alphabet");
}
else
printf("not alphabet");
return 0;
}
