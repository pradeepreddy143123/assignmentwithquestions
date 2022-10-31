#include<stdio.h>
int* square();
int main()
{
	int arr[5];
	int *p;
	int i;
	printf("enter a number\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}


	for(i=0;i<=5;i++)
	{
		p=square();
		*p=arr[i];
	}
}

int* square()
{
	 static int b;
	if(b>0)
	{
		b=b*b;
		printf("%d\n",b);
	}
	return &b;
}





















