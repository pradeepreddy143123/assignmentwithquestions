#include<stdio.h>
int main()
{
int num,arr[15],i,j;
printf("enter a integer number");
scanf("%d",&num);
for(i=0;num>0;i++)
{
arr[i]=num%2;
num/=2;
}
printf("binary num is : ");
for(j=i-1;j>=0;j--)
printf("%d",arr[j]);
return 0;
}

