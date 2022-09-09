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
