#include<stdio.h>
int square(int a)
{
	int i=0,c=0;
	while(i<a)
	{
		c=c+a;
		i++;
	}
	return c;
}
int main()
{
	int a,c;
	printf("enter the numbers");
	scanf("%d",&a);
	c=square(a);
	printf("%d\n",c);
}

