/*Write a program that reads a file containing integers and appends the sum of all integers at the end.*/


#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int c,sum=0;

	fp=fopen("new.txt","r");
	if(!fp)
	{
		printf("file has opened successfully\n");
	}
	while(fp!=EOF)
	{
		fputc(fp,sum);
		sum=sum+(c-48);
		printf("%d",sum);
	}

}
