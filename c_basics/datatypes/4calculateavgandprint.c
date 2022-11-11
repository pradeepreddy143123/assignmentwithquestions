/*4)Read 4 numbers and calculate their average and print.
eg., 
enter 4 numbers
12 34 57 89
average of 12,34,57 & 89 is: 48 
*/





#include<stdio.h>
int main()
{
int a,b,c,d;
float e;
printf("enter the four number a,b,c,d");
scanf("%d%d%d%d",&a,&b,&c,&d);
e=(a+b+c+d)/4;
printf("%f",e);
return 0;
}
