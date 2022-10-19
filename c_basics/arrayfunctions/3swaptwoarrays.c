#include<stdio.h>
void fun(int arr1[], int arr2[]);
int i,j,temp,n;
int main()
{

	printf("enter a the size of array:");
	scanf("%d",&n);
	int arr1[n];
	int arr2[n];
	printf("enter elements for array1");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf("enter the elements for array2");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	fun(arr1,arr2);
}
void fun(int arr1[],int arr2[])
{
        
	for(i=0,j=n-1;i<n;i++,j--)
	{
		temp=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=temp;
	}
             printf("after reversing\n");

		for(i=0;i<n;i++)
		{
			printf("%d ",arr1[i]);
		}

		for(i=0;i<n;i++)
		{
			printf("%d ",arr2[i]);
		}
	}

