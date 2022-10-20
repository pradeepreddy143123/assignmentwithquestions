#include<stdio.h>
void strlower(char s[])
{
int i=0,n;
for(i=0;s[i]!=0;i++)
{
if(s[i]>='A'&&s[i]<='Z')
{
n=s[i]+32;
}
if(s[i]>='a'&&s[i]<='z')
{
n=s[i];
}
printf("%c",n);
}
printf("\n");
}
int main()
{
char s[100]={"PRAdeep"};
strlower(s);
}

