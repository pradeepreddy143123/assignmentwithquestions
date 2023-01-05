#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/types.h>
int main(int argc,char *argv[])
{
int fd,x,ret,i,j,k,count=0,n=0,l=0;
char a[1000];
for(j=1;j<argc;j++)
{
fd=open(argv[j],O_RDONLY);
ret=read(fd,a,4096);
for(i=0;i<ret;i++)
if(a[i]=='\n')
l++;
x=l-10;
for(i=0;i<ret;i++)
{
if(a[i]=='\n')
count++;
if(count==x)
k=i;
}
n=lseek(fd,k,SEEK_SET);
read(fd,a,ret-k);
write(1,a,ret-k);
}
}
