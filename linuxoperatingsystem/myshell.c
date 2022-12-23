#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<sys/wait.h>
 

int myshell(char p[])
{
int status,ret,n,i=1;
pid_t pid;
pid=fork();
if(pid==0)
{
ret=execl("/bin/sh","sh","-c",p,NULL);
if(ret==0)
printf("child complete\n");

exit(0);
}
else
{
wait(&status);

printf("parent complete\n");
return 1;
}
}
int main()
{
int i=1,d;
char argv[100];

while(i)
{
scanf("%s",argv);

d=myshell(argv);
if(d==1)
i++;
else
{
break;
}
}
return 0;
}

