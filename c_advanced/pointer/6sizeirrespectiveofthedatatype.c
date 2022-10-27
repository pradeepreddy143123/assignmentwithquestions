#include<stdio.h>
int main()
{
int *p1;
float *p2;
double *p3;
long double *p4;
signed char *p5;
unsigned char *p6;
long int *p7;
short int *p8;

printf("size of int =%ld\n",sizeof(p1));
printf("size of float=%ld\n",sizeof(p2));
printf("size of double=%ld\n",sizeof(p3));
printf("size of longdouble=%ld\n",sizeof(p4));
printf("size of signed char=%ld\n",sizeof(p5));
printf("size of unsigned char=%ld\n",sizeof(p6));
printf("size of long int=%ld\n",sizeof(p7));
printf("size of short int=%ld\n",sizeof(p8));
}


