#include<stdio.h>
int main()
{
	int i=1,j,n=5;
	do
	{
		j=1;
		do
		{
			printf("* ");
			j++;
		}
		while(j<=i);
		printf("\n");
		i++;
	}
	while(i<=n);
	return 0;
}
