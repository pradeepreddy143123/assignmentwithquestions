#include<stdio.h>
#define SORTARRAY(a,b) (a>b)
int main()
{
	int i,j,temp,a[5];
	printf("enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(SORTARRAY(a[i],a[j]))
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
	return 0;
}
