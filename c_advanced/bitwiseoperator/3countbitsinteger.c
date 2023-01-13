#include<stdio.h>

//1st method
/*void printbinary(char x);
int main()
{
int x;
printf("enter a input value\n");
scanf("%d",&x);
printbinary(x);
}

void printbinary(char x)
{
int i,c=0;
for(i=0;i<8;i++)
{
if(x&0x80)
{
printf("1");
c++;
}
else
{
printf("0");
x=x<<1;
}
}
printf("\n");
printf("%d\n",c);
}
*/

//2nd method
int main()
{
int n,count=0;
printf("enter a number\n");
scanf("%d",&n);
while(n>0)
{
n=n&(n-1);
count++;
}
printf("%d",count);
}

//3rd method i.e is look up table
/*
char array[16]={0,1,1,2,3,1,4};
array[5]=1;
*/

//2nd method is easy  to use than 1st method and 3rd method

