#include<stdio.h>
int elements(int n,int search,int arr[]);
int main()
{
int i,search,repeat,a,n;
printf("how many values are given\n");
scanf("%d",&n);
int arr[n];
printf("enter a number");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the elements to search\n");
{
scanf("%d",&search);
}
a=elements(n,search,arr);
printf("noofelements=%d\nindexposition=%d\n searchelement=%d\n",n,a,arr[a]);
}

int elements(int n,int search,int arr[])
{
int i,k,repeat=0;
for(i=0;i<n;i++)
{
if(search==arr[i])
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
