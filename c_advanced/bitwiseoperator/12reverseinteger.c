#include<stdio.h>
int main()
{
int num,i;
scanf("%d",&num);
for(i=0;i<8*sizeof(num);i++)
{
if((num&(0x01)))
printf("1");
else
printf("0");
num=num>>1;
}
}
