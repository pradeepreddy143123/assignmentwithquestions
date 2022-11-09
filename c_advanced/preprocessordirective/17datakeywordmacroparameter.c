//Implement  a macro to find the size of a datatype when the datatype keyword is provided as macro parameter.\\




#include<stdio.h>
#define size(dt) dt x##dt;\
                 printf(#dt"%lu\n",(char *)(&x##dt + 1) - (char *)&x##dt);
int main()
{
size(int)
size(float)
size(char)
size(double)
}
