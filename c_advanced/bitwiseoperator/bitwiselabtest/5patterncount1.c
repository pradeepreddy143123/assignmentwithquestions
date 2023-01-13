#include<stdio.h>
int main()
{
int pattern,c=0,i;
long int num;
printf("enter the numer\n");
scanf("%lx%x",&num,&pattern);
for(i=0;i<14;i++)
{
if((num&pattern)==pattern)
c++;
num=num>>4;
}
printf("%d",c);
}
