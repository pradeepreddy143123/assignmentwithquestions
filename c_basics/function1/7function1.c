#include<stdio.h>
int power(int a,int b)
{
	int c=1,i=1;
	while(i<=b)
	{
		c=c*a;
		i++;
	}
	return c;
}
int main()
{
	int a,b,s;
	scanf("%d%d",&a,&b);
	s=power(a,b);
	printf("%d",s);
}
