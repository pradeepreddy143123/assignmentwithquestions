#include<stdio.h>
 #include<stdlib.h>
 #include<unistd.h>
 #include<errno.h>
 #include<sys/wait.h>
 

int mysystem(char p[])
{
int status,ret;
pid_t pid;
pid=fork();
if(pid==0)
{
ret=execl("/bin/sh","sh","-c",p,NULL);
if(ret==-1)
perror("execl fails");
exit(0);
}
else
wait(&status);
return 0;
}

int main()
{
int d;
d=mysystem("ps -eaf");
if(d==0)
printf("successfully executed\n");
return 0;
}
