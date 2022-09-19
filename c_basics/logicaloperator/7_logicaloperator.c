#include<stdio.h>
int main()
{
char c;
printf("enter a alphabet");
scanf("%c",&c);
if(c<='z' && c>= 'a')
{
printf("%c",c-32);
}
else if(c<='Z' && c>='A')
{
printf("%c", c+32);
}
else
printf("not alphabet");
return 0;
}
