#include<stdio.h>
char * strrev(char s[])
{
char *r;
char temp;
char *l=r=s;
for(;*l;l++)
{
	;
}
for(l--;s<l;s++,l--)
{
temp=*s;
*s=*l;
*l=temp;
}
return r;
}

int main()
{
char s[100];
printf("enter the name\n");
scanf("%s",s);
char *a=strrev(s);
printf("%s",a);
}

