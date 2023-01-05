#include<stdio.h>
#include<unistd.h>
#include<errno.h>
int main()
{
char ch;
int ret,ret1;
ret=read(0,&ch,1);
if(ret<0)
perror("read fail\n");
ret1=write(1,&ch,ret);
if(ret1<0)
perror("\nwrite fail\n");
}

