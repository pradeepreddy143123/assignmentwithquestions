#include<stdio.h>
void printbinary(char x);
int main()
{
int x;
printf("enter a input value\n");
scanf("%d",&x);
printbinary(x);
}

void printbinary(char x)
{
int i;
for(i=0;i<8;i++)
{
if(x&0x80)
printf("1");
else
printf("0");
x=x<<1;
}
printf("\n");
}
