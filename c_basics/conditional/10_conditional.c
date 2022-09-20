#include <stdio.h>
int main()
{
float a,b,c,d,e,f,marks,grade,average;
printf("enter the six subjects");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
average =(a+b+c+d+e+f)/6;
printf("%f",average);
if(average<=39)
{
printf("fail");
}
else if(average<=49)
{
printf("thirddivision");
}
else if(average<=59)
{
printf("seconddivision");
}
else if(average<=79)
{
printf("firstdivision");
}
else if(average<=100)
{
printf("honours");
}
return 0;
}
