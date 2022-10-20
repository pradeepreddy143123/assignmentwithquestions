#include<stdio.h>
void strreplace(char s[],char c1,char c2)
{
	int i;
	for(i=0;s[i]!=0;i++)
		if(s[i]==c1)
		{
			s[i]=c2;
		}
}

int main()
{
	char c1,c2;
	char s[100];
	printf("enter the string");
	scanf("%s",s);
	printf("enter c1\n");
	scanf(" %c",&c1);
	printf("enter c2\n");
	scanf(" %c",&c2);
	strreplace(s,c1,c2);
	printf("%s",s);
	}
