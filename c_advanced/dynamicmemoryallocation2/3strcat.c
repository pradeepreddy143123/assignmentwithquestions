#include<stdio.h>
#include<stdlib.h>
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
	
	char *s=(char *)malloc(100*sizeof(char));
	char *d=(char *)malloc(100*sizeof(char));
        printf("enter the string1\n");
        scanf("%s",s);
        printf("enter the string2\n");
        scanf("%s",d);
	char *a=mystrcat(d,s);
        printf("%s",a);
}

