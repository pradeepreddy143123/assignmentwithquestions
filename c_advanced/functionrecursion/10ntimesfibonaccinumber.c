//10) Print the first n Fibonacci numbers.

#include<stdio.h>

int  fib(int c)
{
	if(c == 0)
	return 0;
	else if(c==1)
	return 1;
	else
	return fib(c-1) + fib(c-2);
}

void main()
{
	int n,i;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("%d",fib(i));
}

