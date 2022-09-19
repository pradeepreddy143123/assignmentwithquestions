#include<stdio.h>
int main()
{
char c;
printf("enter a alphabet");
scanf("%c",&c);
(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') ? printf("it is vowel") : printf("not vowel");
return 0;
}
