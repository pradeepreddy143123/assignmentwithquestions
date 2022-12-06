#include<stdio.h>
int main()
{
int s=21,b=0,c;
while(1)
{
printf("enter a number\n");
scanf("%d",&b);
if(b>=1&&b<=4)
{
s=s-b;
printf(" remaining cards after user picked = %d\n",s);
c=5-b;
printf("remaing cards  picked up by  computer=%d\n",c);
s=s-c;
{
printf("remaining cards after picked is =%d\n",s);
}
if(s==1)
{
printf("remaining  cards is %d",s);
printf("loser\n");
break;
}
}
}
}


