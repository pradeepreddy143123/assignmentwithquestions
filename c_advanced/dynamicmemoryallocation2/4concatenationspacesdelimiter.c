#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void mystrcat(char s1[],char s2[],int n);
int main()
{
int i,n,x;
char *s1=(char *)malloc(20*sizeof(char));
char *s2=(char *)malloc(20*sizeof(char));
printf("enter no of strings\n");
scanf("%d",&n);
printf("enter strings\n");
for(i=0;i<n;i++)
{
if(i==0)
scanf(" %s",s1);
if(i>0)
scanf(" %s",s2);
mystrcat(s1,s2,n);
}
x=strlen(s1);
if(i==n)
{
if(s1[x]!='.')
{
s1[x]='.';
}}
printf("%s\n",s1);
return 0;
}

void  mystrcat(char s1[],char s2[],int n)
{
int i,l,j,k,m;
j=strlen(s1);
k=strlen(s2);
m=j+k;
s1=realloc(s1,m);
for(i=j,l=0;s2[l]!=0;i++)
{
if(i==j)
{
s1[i]=' ';
}
if(i>j)
{
s1[i]=s2[l];
l++;
}
}
s1[i]=0;
}

