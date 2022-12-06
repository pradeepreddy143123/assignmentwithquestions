/*8)
  " Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers. Arrays should not be sorted after merging. arrays should always stay sorted while they are being merged into another array.
  Assume that the input arrays are sorted.
  eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20"

 */

#include<stdio.h>
#include<stdlib.h>
void sorting(int *,int);
int * mergesorting(int *,int *,int*,int,int,int *);
int main()
{
int n,m,i,k=0;
printf("enter the how many elements do you want from first array \n");
scanf("%d",&n);
printf("enter the how many elements do you want from second array \n");
scanf("%d",&m);
int *arr1=(int *) malloc(n*sizeof(int));
int *arr2=(int *) malloc(m*sizeof(int));
int *arr3=(int *) malloc((m+n)*sizeof(int));
printf("enter the first array\n");
for(i=0;i<n;i++)
scanf("%d",&arr1[i]);

printf("enter the second array\n");
for(i=0;i<m;i++)
scanf("%d",&arr2[i]);
sorting(arr1,n);
sorting(arr2,m);
arr3=mergesorting(arr1,arr2,arr3,m,n,&k);
printf("after the merge sorting\n");
for(i=0;i<k;i++)
printf("%d\n",arr3[i]);
return 0;

}
void sorting(int *arr,int n)
{
int i,j,k;

for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
k=arr[j];
arr[j]=arr[j+1];
arr[j+1]=k;
}

}
}
}
int fun(int arr3[],int arr1,int k)
{
int i;
for(i=0;i<k;i++)
{
if(arr3[i]==arr1)
return 1;
}
return 0;
}
int * mergesorting(int *arr1,int *arr2,int *arr3,int m,int n,int *d)
{
int i=0,j=0,k=0,c=0;
while(i<n&&j<m)
{
if(arr1[i] < arr2[j])
{
if(k!=0 && fun(arr3,arr1[i],k))
{
i++;
c++;
}
else
{
arr3[k]=arr1[i];
i++;
k++;
}
}
else if(arr1[i] > arr2[j])
{
if(k!=0 && fun(arr3,arr2[j],k))
{
j++;
c++;
}
else
{
arr3[k]=arr2[j];
j++;
k++;
}

}
else
{
if(k!=0 && fun(arr3,arr1[i],k))
{
i++;
j++;
c++;
}
else
{
arr3[k]=arr1[i];
i++;
j++;
k++;
}
}

}
while(i<n)
{
if(fun(arr3,arr1[i],k))
{
c++;
i++;
}
else
{
arr3[k]=arr1[i];
k++;
i++;
}
}
while(j<m)
{
if(fun(arr3,arr2[j],k))
{
c++;
i++;
}
else
{
arr3[k]=arr2[j];
j++;
k++;
}
}
*d=k;

return arr3;
}

