#include<stdio.h>
#include<stdlib.h>
int biggest(int p[],int n )
{
int bi,ib,i;
for(i=0;i<n;i++)
{
if(i==0)
{
bi=p[i];
ib=i;
}
if(p[i]>bi)
{
bi=p[i];
ib=i;
}
}
return ib;
}

int main()
{
int n,i,bi,ib,k,*p;
printf("enter a number\n");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
k=biggest(p,n);
printf("%d=biggest %d=position",p[k],k);
}

