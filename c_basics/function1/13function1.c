#include<stdio.h>
int product(int a,int b)
{
	int i=0,c=0;
	while(i<b)
	{
		c=c+a;
		i++;
	}
	return c;
}
int main()
{
	int a,b,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=product(a,b);
	printf("%d",c);
}
