#include<stdio.h>
void fun(int arr[],int num);
int num,arr[15],i,j;
int main()
{
printf("enter a integer number");
scanf("%d",&num);
fun(arr,num);
}

void fun(int arr[],int num)
{
for(i=0;num>0;i++)
{
arr[i]=num%2;
num/=2;
}
printf("binary num is : ");
for(j=i-1;j>=0;j--)
printf("%d",arr[j]);
}


