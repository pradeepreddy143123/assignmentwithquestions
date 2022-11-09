#include<stdio.h>
int strcmp(char s1[],char s2[])
{
	int i;
	for(i=0;*s1||*s2;i++,s1++,s2++)
	{
		if(*s1-*s2==-32||*s1-*s2==32||*s1-*s2==0)
		

			continue ;
			else if(*s1>*s2)
			{
				return -1;
			}
			else if(*s2>*s1)
			{
				return 1;
			}
		
	}
	return 0;
}

int main()
{
	int a;
	char s1[100],s2[100];
	printf("enter the string1\n");
	scanf("%s",s1);
	printf("enter the string2\n");
	scanf("%s",s2);
	a=strcmp(s1,s2);
	if(a==-1)
	{
		printf("s1 is bigger");
	}
	else if(a==1)
	{
		printf("s2 is bigger");
	}
	else
	{
		printf("both are equal");
	}
}


