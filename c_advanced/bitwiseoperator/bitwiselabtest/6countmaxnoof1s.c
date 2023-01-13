#include<stdio.h>
int main()
{
int num,big=0,count=0,i;
printf("enter a num\n");
scanf("%d",&num);
for(i=0;i<8;i++)
{
if(num&(0x80))
{
count++;
if(big<count)
big=count;
}
else
count=0;
num=num<<1;
}
printf("%d",big);
}
