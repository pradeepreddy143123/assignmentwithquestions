//2) Write a program to find the nth Fibonacci number.


#include<stdio.h>

int fib(int n)
{
if(n==0||n==1)
return 1;
return (n-1)+(n-2);
}

int main()
{
int n=5;
printf("fibonacci number : %d\n",fib(n));
}
