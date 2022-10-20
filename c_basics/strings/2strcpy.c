#include<stdio.h>
void mystrcpy(char d[], char s[])
{
int i=0;
while(s[i]!='\0')
{
d[i]=s[i];
i++;
}
d[i]=s[i];
}

int main()
{
char s[8]={"pradeep"};
char d[8];
mystrcpy(d,s);
printf("%s",d);
}

