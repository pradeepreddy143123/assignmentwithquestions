#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("enter a number");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		if(num%i==0)
		count++;
		i++;
	}
	{
		if(count==2)
		{
			printf("prime number");
		}
		else
			printf("not prime number");
	}
	return 0;
}
