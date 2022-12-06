#include<stdio.h>
int main()
{
int i,arr[5],j,prod[5];
printf("enter the first array\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
printf("enter second array\n");
for(j=0;j<5;j++)
{
prod[j]=1;
}
for(i=0;i<5;i++)
for(j=0;j<5;j++)
if(i!=j)
{
prod[j]*=arr[i];
}
for(i=0;i<5;i++)
printf("prod[%d]=%d\n",i,prod[i]);
}
