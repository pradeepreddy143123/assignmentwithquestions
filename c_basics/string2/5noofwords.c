#include<stdio.h>
int noofwords(char s[])
{
int i,c=1,n;
for(i=0;s[i]!=0;i++)
{
if(s[i]==' '&& s[i+1]!=' '||s[i]==','&&s[i+1]!=','||s[i]=='.'&&s[i+1]!='.'||s[i]=='?'&&s[i+1]!='?')
c++;
}
return c;
}

int main()
{
char s[100];
int a;
printf("enter a string\n");
scanf("%[^\n]s",s);
a=noofwords(s);
printf("%d",a);
}
