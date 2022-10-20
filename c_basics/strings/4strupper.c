#include<stdio.h>
void strupper(char s[])
{
	int i,n;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			n=s[i]-32;
		}
		if(s[i]>='A'&&s[i]<='Z')
		{
			n=s[i];
		}
		printf("%c",n);
	}
}
int main()
{
	int i; 
	char s[100];//={"PRADeep"};
	printf("enter a string\n");
	scanf("%s",s);
	strupper(s);
	printf("\n");
}
