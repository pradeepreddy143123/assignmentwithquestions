/* Write a program to calculate simple interest using below steps:

steps: 
a)declare 2 integer variables p and n to represent principle and duration in months respectively.
b)declare a floating point variable r to represent rate of interest.
c)declare a floating point variable si to store simple interest after calculation.
d)declare a floating point variable m to represent time duration in years.
e)print the following indicative message using printf
 "please enter principle,time in months and rate of interest"
f)read the values of p ,n and r using scanf.
g)devide n by 12 using / symbol and store the result in m, to convert time duration from months to years.
Hint : m = n / 12.0;
h)calculate simple interest using the below formula and store in si variable.
si = p * m * r / 100;
i) print si value to the user using printf.

*/





#include<stdio.h>
int main()
{
int p,n;
float r;
float si;
float m;
printf("Enter the principle rate of interest");
scanf("%d%d%f",&p,&n,&r);
m = n/12.0;
si = p*m*r/100;
printf("%f",si);
return 0;
}
