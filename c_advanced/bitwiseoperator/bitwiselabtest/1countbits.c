#include<stdio.h>
void binary(int x)
{
int i,c=0;
for(i=0;i<8*sizeof(int);i++)
{
if(x&0x800000000)
{
printf("1");
c++;
}
else
{
printf("0");
}
x=x<<1;
}
}

int main()
{
int x;
printf("enter a number\n");
scanf("%d",&x);
binary(x);
}
