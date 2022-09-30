#include<stdio.h>
int Isleapyear(int y)
{
	if(y%4==0&&y%100!=0||y%400==0)
	{
		return 29;
	}
	else
	{
		return 28;
	}
}
int noofdays(int m,int y)
{
	if(m>=1&&m<=12)
	{
		switch(m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:return 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:return 30;
				break;
			case 2:if(Isleapyear(y))
			        break;
		}
	}
}
int main()
{
	int m,y,d;
	printf("enter the month and year");
	scanf("%d%d",&m,&y);
	d=noofdays(m,y);
	printf("%d",d);
}
