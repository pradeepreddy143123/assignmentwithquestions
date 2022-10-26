#include<stdio.h>
int Isnumeric(char s[])
{
int i;
for(i=0;s[i]!=0;i++)
{
if(s[i]>='0'&&s[i]<='9')
{
return 1;
}
else
{
return 0;
}
}
}
int main()
{
int a;
char s[100];
printf("enter the input character\n");
scanf("%s",s);
a=Isnumeric(s);
if(a==1)
{
printf("isnumeric");
}
else
{
printf("notisnumeric");
}
}
