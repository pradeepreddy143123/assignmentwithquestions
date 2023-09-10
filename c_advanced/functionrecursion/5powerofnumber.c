// Write a program to find the power of a number( x to the power of n = x * x * x * x....n times)


#include<stdio.h>
int power(int base,int exp)
{
if(exp==0)
return 1;
else
return base*power(base,exp-1);
}

int main()
{
int base=2,exp=3;
printf("power : %d\n",power(base,exp));
}
