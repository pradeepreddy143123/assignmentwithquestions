#include<stdio.h>
#include<stdlib.h>
#define n 5
int* sorting(int p[]);
int main()
{
int i;
int *p;
p=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
p=sorting(p);
for(i=0;i<n;i++)
{
printf("%d",p[i]);
}
}




int *sorting(int p[])
{
int temp,i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(p[j]>p[j+1])
{
temp=p[j+1];
p[j+1]=p[j];
p[j]=temp;
}
}
}
return p;
}


