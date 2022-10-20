#include<stdio.h>
void strrev(char s[])
{
int i,temp,j,n,p;
for(i=0;s[i]!=0;i++);
{
p=i;
for(i=0,j=p-1;i<j;i++,j--)
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
printf("%s",s);
}
}

int main()
{
char s[100];
printf("enter the name\n");
scanf("%s",s);
strrev(s);
}
