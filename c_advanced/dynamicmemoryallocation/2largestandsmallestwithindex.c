#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,i,si,bi,is,k;

printf("enter a number");
scanf("%d",&num);
int p[num];
for(i=0;i<num;i++)
{
scanf("%d",&p[i]);
if(i==0)
{
si=bi=p[i];
k=i;
}
if(p[i]>bi)
{
bi=p[i];
k=i;
}
if(p[i]<si)
{
si=p[i];
is=i;
}
}
printf("biggest=%d\n index=%d\n",bi,k);
printf("smallest=%d\n index=%d\n",si,is);
}

