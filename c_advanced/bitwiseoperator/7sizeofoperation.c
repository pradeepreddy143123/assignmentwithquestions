#include<stdio.h>
int main()
{
int x=1,c=0;
while(x)
{
x=x<<1;
c++;
}
printf("%d\n",c/8);
}


