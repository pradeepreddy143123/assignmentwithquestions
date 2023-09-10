//4) Write a macro to find size of a given data typeusing pointers\\


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

