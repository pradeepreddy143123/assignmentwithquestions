#include<stdio.h>
int main()
{
	int i,n,a;
	printf("enter the two numbers");
	scanf("%d",&a);
	scanf("%d",&n);
	printf("Odd numbers\n");
	i=a;
	while(i<n)
	{
		if(i%2!=0)
		{
			printf("\t%d\n",i);
		}
		i++;
	}
	printf("even numbers\n");
	i=a;
	while(i<n)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			
		}
		i++;	
}
	return 0;
}
