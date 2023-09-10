//1) Write a program to find the factorial of a number.

#include<stdio.h>

int fact(int n)
{
if(n==0)
return 1;
return n*fact(n-1);
}

int main()
{
int n=5;
printf("factorial : %d\n",fact(n));
}


