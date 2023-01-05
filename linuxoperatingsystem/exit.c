#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void myexit()
{
int fd;
char buff[100];
int status,ret,i=0;
buff[0]=49;
fd=open("abc",O_RDWR);
//ret=read(fd,buff,1)'
write(fd,buff,1);
printf("done");
}

int main()
{
myexit();
}
