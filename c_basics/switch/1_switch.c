#include<stdio.h>
int main()
{
char c;
printf("enter a alphabet");
scanf("%c",&c);
switch(c)
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("vowel");
break;
default:
printf("constant");
return 0;
}
}
