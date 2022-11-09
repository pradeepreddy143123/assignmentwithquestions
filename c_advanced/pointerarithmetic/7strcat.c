#include<stdio.h>
char  *mystrcat(char d[], char s[])
{
	int i,j;
	char *r=d;

	for(;*d;d++);
	for(;*s;d++,s++)
	{
		*d=*s;
	}
	*d=0;
	return r;
}

int main()
{
	
	char s[100]={"reddy"};
	char d[100]={"pradeep"};
	char *a=mystrcat(d,s);
        printf("%s",a);
}


