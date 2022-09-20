#include <stdio.h>
int main()
{
int units;
float bills;
printf("enter number of units");
scanf("%d",&units);
if(units<=200)
{
printf("pay 100 rupees");
}
else if(units<=400)
{
units=units-200;
bills=100+units*0.65;
printf("%f",bills);
}
else if(units<=600)
{
units=units-400;
bills=230+units*0.80;
printf("%f",bills);
}
else if(units>600)
{
units=units-600;
bills=390+units*1.00;
printf("%f",bills);
}
}
