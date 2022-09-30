#include<stdio.h>
int fun_alpha_num(char ch)
{ 
	
	if(ch>='a' && ch<='z'||ch>='A' && ch<='Z'||ch>='0' && ch<='9')
	
		return 1;
	
	else
	
		return 0;
	
}
int main()
{
	int c;
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	c=fun_alpha_num(ch);
	if(c==1)
	{
		printf("%c alphanumeric\n",ch);
	}
	else
	{
		printf("%c not alphanumeric\n",ch);
	}
}
