#include<stdio.h>
#include<string.h>
int mypalindrome(char str[])
{
int i,j,even=0,odd=0,count=0;
for(i=0;str[i]!=0;i++)
{
for(j=0;str[j]!=0;j++)
{
if(str[i]==str[j])
{
count++;
}
}
if(count%2==0)
even++;
else if(count%2==1)
odd++;
}
if(even>=1&&odd==1||odd==0)
printf("palindrome possible");
else
printf("palindrome not possible");
}

int main()
{
int i;
char str[100];
printf("enter the string\n");
scanf("%s",str);
mypalindrome(str);
}
