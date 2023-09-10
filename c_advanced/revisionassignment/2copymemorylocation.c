//2) WAP copy 0x20 data in to 0x7800 memory location? \\

#include<stdio.h>
int main()
{
int *p=(int *)(0x7800);
 *p=0x20;
}
