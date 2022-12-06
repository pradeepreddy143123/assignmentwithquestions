#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *itoa(int *p)
{
	static char s[100];
	int i,temp,j,d; 
	for(i=0;*p>0;i++)
	{
			d=*p%10;
			s[i]=d+48;
			*p=*p/10;
	}
		s[i]='\0';
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}

	return s;
}
int main()
{
	int *p=(int *)malloc(sizeof(int));
	printf("enter the value\n");
	scanf("%d",p);
	char *z=itoa(p);
	printf("the integer in string=%s\n",z);
}
