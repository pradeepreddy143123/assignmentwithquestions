#include<stdio.h>
void swaparr(int arr[]);
int main()
{
	int i;
	int arr[3]={1,2};
	for(i=0;i<2;i++)
	{
		printf("%d",arr[i]);
	}

	swaparr(arr);
	for(i=0;i<2;i++)
	{
		printf("%d",arr[i]);
	}
}
