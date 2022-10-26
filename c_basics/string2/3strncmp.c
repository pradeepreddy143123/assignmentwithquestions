#include<stdio.h>
int heystrncmp(char s1[],char s2[],int n)
{
int i;
for(i=0;s1[i]!=0||s2[i]!=0;i++)
{
for(i=0;i<n;i++)
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
}
return 0;
}


int main()
{
int a,n;
char s1[100],s2[100];
printf("enter the string1\n");
scanf("%s",s1);
printf("enter the string2\n");
scanf("%s",s2);
printf("enter the no of input character values\n");
scanf("%d",&n);
a=heystrncmp(s1,s2,n);
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
