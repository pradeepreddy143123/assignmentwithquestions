//6) Read some sentences as input and print the longest sentence of all as output.
#include<stdio.h>
void mystrcpy(char s1[],char s2[])
{
int i;
for(i=0;s2[i]!=0;i++)
{
s1[i]=s2[i];
}
s1[i]=0;
}
int mystrlen(char s[])
{
int i;
for(i=0;s[i]!=0;i++);
return i;
}
int main()
{

int i,l1,l2,n;
printf("how many senetences you want to  enter\n");
scanf("%d",&n);
char s[n][200];
for(i=0;i<n;i++)
{
printf("enter the sentence%d\n",i+1);
if(i==0)
{
scanf(" %[^\n]s",s[i]);
}
if(i>=1)
{
scanf(" %[^\n]s",s[i]);
l1=mystrlen(s[0]);
l2=mystrlen(s[i]);
if(l2>l1)
mystrcpy(s[0],s[i]);
}
}
printf("the biggest sentense is\n%s\n",s[0]);
}

