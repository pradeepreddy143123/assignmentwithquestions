//Write a program to count the number of digits in a number.

#include<stdio.h>

int count(int n)
{
	static int c=0;
	if(n==0)
		return c; //to return minimal value
	else
	{
		c++;
		return count(n/10);
	}
}

int main()
{
	int n=123;
	printf("count : %d\n",count(n));
}

