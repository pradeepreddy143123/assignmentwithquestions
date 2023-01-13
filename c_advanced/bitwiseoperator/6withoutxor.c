#include<stdio.h>
int main()
{
int x,y,z;
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
z=(~x&y)|(x&(~y));
printf("%d",z);
}

