#include<stdio.h>
#define gensize(x)  (char *)(&x + 1) - (char *)&x
                   
                                      

int main()
{
int a;
float b;
char c;
printf("%lu\n",gensize(a));
printf("%lu\n",gensize(b));
printf("%lu\n",gensize(c));
}
