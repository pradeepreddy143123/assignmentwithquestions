//WAP to print Binary equivalent of an integer using recursion without using any array variable.

#include<stdio.h>

int binary(int n)
{
	if(n==0)
		return 0;
	else
	{
		return ((n%2)+10*binary(n/2));
	}
}


int main()
{
	int n=5;
	printf("binary :  %d",binary(n));
}

