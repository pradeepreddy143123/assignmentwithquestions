//Write a recursive function that returns the reverse of an integer.

#include<stdio.h>
int revint(int n)
{
static int s=0,rem,rev;
if(n==0)
return rev;
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
return revint(n);
}

int main()
{
int n=123;
printf("reverse : %d ",revint(n));
}
