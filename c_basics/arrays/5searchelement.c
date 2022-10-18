#include<stdio.h>
int main()
{
int i,n,search,repeat=0;
printf("how many values are given\n");
scanf("%d",&n);
int arr[n];
printf("enter a number");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the elements to search\n");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(search==arr[i])
{
printf("%d is funded at %d position\n",search,i+1);
repeat++;
}
}
if(repeat>0)
{
printf("repeted= %d",repeat);
}
else
printf("not repeated\n");
}
