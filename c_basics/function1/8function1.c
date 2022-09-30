#include<stdio.h>
int leapyear(int a)
{
	if(a%4==0&&!a%100==0||a%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a,b;
	printf("enter the year");
	scanf("%d",&a);
	b=leapyear(a);
	if(b==1)
	{
		printf("%d is leap year\n",a);
	}
	else
	{
		printf("%d is not leap year\n",a);
	}
}
