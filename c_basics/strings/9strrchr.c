#include<stdio.h>
int mystrrchr(char s[],char c)
{
int i;
for(i=0;s[i]!=0;i++);
for(i;i>=0;i--)
{
if(s[i]==c)
{
return i;
}
}
return -1;
}

int main()
{
int a;
char c;
char s[]={"pradeep reddy"};
printf("enter the value of character\n");
scanf("%c",&c);
a=mystrrchr(s,c);
if(a==-1)
{
printf("invalid character");
}
else
{
printf("%c found at index=%d",c,a);
}
}
