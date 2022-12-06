#include<stdio.h>
#include<stdlib.h>
#define n 4
int *product(int p[]);
int main()
{
int i,j,k;
int *p;
p=(int *)malloc(n*sizeof(int));
printf("enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
p=product(p);
for(i=0;i<n;i++)
{
printf(" %d",p[i]);
}
}

int *product(int p[])
{
int i,j;
int *b;
b=(int *)malloc(n*sizeof(int));
for(j=0;j<n;j++)
{
b[j]=1;
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(i!=j)
{
b[j]=b[j]*p[i];
}
return b;
}

