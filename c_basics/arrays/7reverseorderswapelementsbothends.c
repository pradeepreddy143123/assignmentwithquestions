#include<stdio.h>
int main()
{
int i,arr[5]={1,2,3,4,5};
for(i=0;i<5;i++)
{
printf("%d\n",arr[i]);
}
printf("after reversing the order:\n");
for(i=4;i>=0;i--)
{
printf("%d\n",arr[i]);
}
}


