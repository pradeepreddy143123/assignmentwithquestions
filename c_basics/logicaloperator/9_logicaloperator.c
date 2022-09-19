#include<stdio.h>
int main()
{
char c;
printf("enter a alphabet");
scanf("%c",&c);
(c<='z' && c>='a') ? printf("it is alphabet"):(c<='Z' && c>='A') ? printf("it is a alphabet") : printf("not alphabet");
return 0;
}
