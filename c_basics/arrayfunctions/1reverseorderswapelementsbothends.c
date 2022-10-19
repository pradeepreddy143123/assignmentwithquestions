#include<stdio.h>
void fun(int arr[],int n)
{
int i,j,temp;
for(i=0,j=n-1;i<j;i++,j--)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}



int main()
{
int i,n;
printf("enter the size of array:\n");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
fun(arr,n);
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}


