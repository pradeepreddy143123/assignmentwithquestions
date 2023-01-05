#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
void mywait()
{
int fd,ret;
char buff[100];
while(1)
{
fd=open("abc",O_RDWR);
ret=read(fd,buff,1);
printf("%c\n",buff[0]);
if(buff[0]==49)
break;
close(fd);
}

}


int main()
{
mywait();
}


