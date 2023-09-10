//3) Write a macro to find size of a variable using pointers\\

#include<stdio.h>

#define size(p)     printf("%lu\n",(char *)(&p + 1) - (char *)&p)

int main()
{
int p;
char q;
float r;
size(p);
size(q);
size(r);
}

