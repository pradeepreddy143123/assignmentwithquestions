//Print a string in normal and then reverse, using recursion, without actually modifying the string

#include<stdio.h>

//strrev without recursion


/*
int main()
{
	char str[10]={"deep"};
	int i;
	char c=0;
	for(i=0;str[i]!=0;i++)
	{
	c++;
 		printf("%c",str[i]);
         } 

	printf("To print string in reverse \n");
	for(i=c-1;i>=0;i--)
		printf("%c",str[i]);
}
*/



//strrev using recursion

void  mystrrev(char *s)
{
	if(*s != 0)
	{
		mystrrev(s+1);
		printf("%c", *s);
	}
}

int main()
{
	char s[]={"deep"};
	printf("normal string :  %s\n",s); //to print string normally
	mystrrev(s);

}



