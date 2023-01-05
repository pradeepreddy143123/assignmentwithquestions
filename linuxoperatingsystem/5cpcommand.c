#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
FILE *fd1,*fd2;
fd1=fopen(argv[1],"r");
fd2=fopen(argv[2],"w");
if(!fd1|!fd2|argc!=3)
{
printf("error");
}
char c;
while((c=fgetc(fd1))!=EOF)
{
fputc(c,fd2);
}
fclose(fd1);
fclose(fd2);
}
