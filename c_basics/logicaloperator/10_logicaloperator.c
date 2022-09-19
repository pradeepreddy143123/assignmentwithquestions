#include<stdio.h>
int main()
{
char c;
printf("enter a alphabet");
scanf("%c",&c);
(c<='z'&& c>='a') ?printf("%c alphabet",c-32) :(c<='Z' && c>='A')? printf("%c alphabet",c+32): printf("not alphabet");
return 0;
}
