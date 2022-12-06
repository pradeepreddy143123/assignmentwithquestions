#include<stdio.h>
int biggest(int a[],int n )
{
int bi,ib,i;
for(i=0;i<n;i++)
{
if(i==0)
{
bi=a[i];
ib=i;
}
if(a[i]>bi)
{
bi=a[i];
ib=i;
}
}
return ib;
}

int main()
{
int n,i,bi,ib,k;
printf("enter a number\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
k=biggest(a,n);
printf("%d=biggest %d=position",a[k],k);
}
