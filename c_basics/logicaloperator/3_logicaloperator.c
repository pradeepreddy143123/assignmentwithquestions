#include<stdio.h>
int main()
{
int units,bills;
printf("enter the units");
scanf("%d",&units);
if(units>=0 && units<=200)
{
printf("pay 100 rupees");
}
else if(units>=201 && units<=400)
{
units =units-200;
bills=100+units*0.65;
printf("%d",bills);
}
else if(units>=401 && units<=600)
{
units=units-400;
bills=230+0.80*units;
printf("%d",bills);
}
else if(units>600)
{
units=units-600;
bills=390+1.00*units;
printf("%d",bills);
}
else
printf("enter the valid units");
return 0;
}
