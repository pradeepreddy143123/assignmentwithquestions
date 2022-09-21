#include<stdio.h>
int main()
{
	int units;
float bills;
	printf("enter the units");
	scanf("%d",&units);
	switch (units==0)
	{
		case 1: printf(" pay 100 rupees");
			break;
		default:	
			switch ((units-1)/100)
			{
				case 0:printf(" pay 100 rupees");
				case 1:printf(" pay 100 rupees");
				       break;
				case 2:
				case 3:printf("%f=bills2",100+(units-200)*0.65);
				       break;
				case 4:
				case 5:printf("%f=bills3",230+(units-400)*0.80);
				       break;
				default:
				case 6:printf("%f=bills4",390+(units-600)*1.00);
				       break;
			}
	}
	return 0;
}
