 /*5) implement your own string reverse function using the above swap function to swap the edges while reversing.

try calling the string reverse function using
1) string variable
2) string constant

note down the output and analyze the reasons.
*/
#include<stdio.h>
#include<stdlib.h>
void strrev(char p[])
{
int i,j;
char temp;
for(i=0;p[i]!=0;i++);
for(i=i-1,j=0;j<i;i--,j++)
{
temp=p[j];
p[j]=p[i];
p[i]=temp;
}
}
//stirng constant
/*
int main()
{
char *s1="khaja moinuddin";
strrev(s1);
printf("after swapping=%s",s1);
return 0;
}
*/
//stirng variable
int main()
{
char s1[2020];
printf("enter the string for string variable\n");
scanf("%[^\n]s",s1);
strrev(s1);
printf("after swapping=%s\n",s1);
return 0;
}
