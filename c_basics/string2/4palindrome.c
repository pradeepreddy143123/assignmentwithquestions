#include<stdio.h>
int palindrome(char s[])
{
int i,j,p;
for(i=0;s[i]!=0;i++);
p=i;

printf("i=%d\n",i);
for(i=0,j=p-1;i<j;i++,j--)
{
printf("s[%d]:%c  s[%d]:%c\n",i,s[i],j,s[j]);
if(s[i]!=s[j])
{
	return 0;
}
}

return 1;
}


int main()
{
int a;
char s[100];
printf("enter the input character\n");
scanf("%s",s);
a=palindrome(s);
if(a==1)
{
printf("palindrome");
}
else
{
printf("notpalindrome");
}
}
