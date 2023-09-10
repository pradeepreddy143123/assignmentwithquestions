/* Open the file  in append mode, and write new numbers to it, and print entire content of the file.*/


#include<stdio.h>

int main()
{
	char ch;
	FILE *fp;

	fp=fopen("new.txt","a");
	if(!fp)
	{
		printf("file opened successfully\n");
		return 1;
	}
   	fprintf(fp,"abc");
	fclose(fp);
}

