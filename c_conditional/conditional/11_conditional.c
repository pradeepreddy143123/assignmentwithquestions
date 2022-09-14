#include<stdio.h>
int main()
{   
char c;
printf("enter the character");
scanf("%c",&c);
if(c<='Z')
{
	if(c>='A')
	{
		printf("it is a alphabet");
	}
	else
		printf("it is not alphabet");
}
else if(c<='z')
{
	if(c>='a')
	{
		printf("it is a alphabet");
	}
	else
		printf("it is not alphabet");
}
return 0;
}
