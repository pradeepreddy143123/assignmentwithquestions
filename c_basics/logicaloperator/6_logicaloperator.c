#include<stdio.h>
int main()
{
char c;
printf("enter a alphabet");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='0'||c=='u')
{
printf("it is a vowel");
}
else
printf("it is not vowel");
return 0;
}
