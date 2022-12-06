#include<stdio.h>
#include<stdlib.h>
int elements(int n,int search,int p[]);
int main()
{
int i,search,repeat,a,n;
int *p;
printf("how many values are given\n");
scanf("%d",&n);
p=(int *) malloc(n*sizeof(int));
printf("enter a number");
for(i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
printf("enter the elements to search\n");
{
scanf("%d",&search);
}
a=elements(n,search,p);
printf("noofelements=%d\nindexposition=%d\n searchelement=%d\n",n,a,p[a]);
}

int elements(int n,int search,int p[])
{
int i,k,repeat=0;
for(i=0;i<n;i++)
{
if(search==p[i])
{
k=i;
repeat++;
}
}
if(repeat==0)
return -1;
else
return k;
}

