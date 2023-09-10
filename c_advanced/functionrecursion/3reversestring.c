//Write a program to reverse a string , using index method & pointer increment method


#include<stdio.h>
void mystrrev(char *s)
{
	if(*s!=0)
	{
		mystrrev(s+1);
		printf("%c",*s);
	}
}

int main()
{
	char s[]={"deep"};
	mystrrev(s);
	printf("\n");
}
