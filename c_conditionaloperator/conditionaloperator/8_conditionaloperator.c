#include<stdio.h>
int main()
{
char c;
printf("enter a alphabet");
scanf("%c",&c);
c<='z'?c>='a'?printf("it is a alphabet\n"):c<='Z'?c>= 'A'?printf("it is a alphabet\n"):printf("not alphabet\n"):printf("not alphabet\n"):printf("not alphabet");
return 0;
}
