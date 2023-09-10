//Read the contents of a file and copy to another file.




int main()
{
	char ch;
	FILE *fp1,*fp2;

	fp1=fopen("new.txt","r");
	fp2=fopen("rep.txt","w");
	ch = fgetc(fp1);
	if(!fp1)
	{
		printf("file opened successfully\n");
				}
				while(ch!=EOF)
				{
		
				fputc(ch,fp2);
				ch=fgetc(fp1);
				}
				fclose(fp1);
				fclose(fp2);
				}

