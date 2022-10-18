#include<stdio.h>
int main()
{
int num[10],i,si,bi,is,ib;
printf("enter a number");
for(i=0;i<10;i++)
{
scanf("%d",&num[i]);
if(i==0)
{
si=bi=num[i];
}
if(num[i]>bi)
{
bi=num[i];
ib=i;
}
if(num[i]<si)
{
si=num[i];
is=i;
}
}
printf("biggest=%d\n index=%d\n",bi,ib);
printf("smallest=%d\n index=%d\n",si,is);
}


