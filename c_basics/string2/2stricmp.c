#include<stdio.h>
int stricmp(char s1[],char s2[])
{
int i;
for(i=0;s1[i]!=0||s2[i]!=0;i++)
{
if(s1[i]<s2[i])
{
return -1;
}
else if(s1[i]>s2[i])
{
return 1;
}
}
return 0;
}

int main()
{
int a;
char s1[100],s2[100];
printf("enter the string1");
scanf("%s",s1);
printf("enter the string2");
scanf("%s",s2);
a=stricmp(s1,s2);
if(a==-1)
{
printf("s2 is bigger");
}
else if(a==1)
{
printf("s1 is bigger");
}
else
{
printf("both are equal");
}
}
