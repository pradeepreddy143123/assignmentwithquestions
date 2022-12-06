//2) return a structure with addition, subtraction, multiplication, quotient and reminder of 2 integers, sent to a function as arguments. Quotient should be a floating point result. All the results to be printed in main function.
#include<stdio.h>
struct operation
{
float add;
float sub;
float mul;
float div;
float mod;
};
struct operation fun(int, int);
int main()
{
float x,y;
scanf("%f%f",&x,&y);
struct operation O;
O=fun(x,y);
printf("sum is;%f\n",O.add);
printf("subraction is;%f\n",O.sub);
printf("multiplication is;%f\n",O.mul);
printf("quotient is;%f\n",O.div);
printf("reminder is;%f\n",O.mod);
return 0;
}

struct operation fun(int a,int b)
{
struct operation x;
x.add=a+b;
x.sub=a-b;
x.mul=a*b;
x.div=a/b;
x.mod=a%b;
return x;
}

