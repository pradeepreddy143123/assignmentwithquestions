#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
int i,fd,ret,line=0;char buff[1000];
fd=open(argv[1],O_RDONLY);
if(fd==-1)
{
perror("unable to open the file");
exit(0);
}
for(i=1;i<argc;i++)
{
while((ret=read(fd,buff,1024))!=0)
{
if(line==10)
break;
else
{
for(i=0;i<ret;i++)
{
if(buff[i]=='\n')
line++;
if(line==10)
break;
write(1,&buff[i],1);
}
write(1,"\n",1);
}
}
}
}

