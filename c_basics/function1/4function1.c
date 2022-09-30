#include<stdio.h>
int Isprime(int a)
{
int i=1,c=0;
while(i<=a)
{
if(a%i==0)
{
c++;
}
i++;
}
if(c==2)
return 1;
else
return 0;
}
int main()
{
int a,b;
printf("enter the number");
scanf("%d",&a);
b=Isprime(a);
if(b==1)
{
  printf("it is a primenumber");
}
else
{
printf("not a primenumber");
}
return 0;
}
