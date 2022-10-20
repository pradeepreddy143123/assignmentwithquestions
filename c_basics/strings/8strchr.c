#include<stdio.h>
int mystrchr(char s[],char c)
{
int i;
for(i=0;s[i]!=0;i++)
{
if(s[i]==c)
{
return i;
}
}
}


int main()
{
char c;
char s[100]={"pradeep"};
printf("enter the value of character");
scanf("%c",&c);
mystrchr(s,c);
printf("index=%d",mystrchr(s,c));
}
