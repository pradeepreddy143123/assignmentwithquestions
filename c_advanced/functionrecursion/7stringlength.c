//Implement string length function using recursion


#include<stdio.h>
int  mystrlen(char *s)
{
	static int c=0;
	if(*s == 0)
		return c;
	else
	{
		c++;
		return mystrlen(++s);
	}
}


int main()
{
	char s[]={"deep"};
printf("length :  %d\n",mystrlen(s));

}


