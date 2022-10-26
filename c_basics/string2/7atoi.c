#include<stdio.h>
int atoi(char s[])
{
int i,sum=0;
for(i=0;s[i]!=0;i++)
{
sum=sum*10+(s[i]-48);
}
return sum;
}


int main()
{
char s[100];
int a;
printf("enter the input character\n");
scanf("%s",s);
a=atoi(s);
printf("%d",a);
}
