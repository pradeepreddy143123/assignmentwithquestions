//1. Write a Macro's Set, clear and toggle n'th bit using bit wise operator?\\


#include<stdio.h>
#define setbit(x,p) x|(0x1<<p)
#define clearbit(x,p) x&(~(0x1<<p))
#define togglebit(x,p) x^(0x1<<p)
#define checkbit(x,p) x&(0x1<<p)
int main()
{
int x,p;
printf("enter a number and position\n");
scanf("%d%d",&x,&p);
printf("after set dec:%d\n",setbit(x,p));
printf("after set hex:%x\n",setbit(x,p));
printf("after clear dec:%d\n",clearbit(x,p));
printf("after clear hex:%x\n",clearbit(x,p));
printf("after toggle dec:%d\n",togglebit(x,p));
printf("after toggle hex:%x\n",togglebit(x,p));
printf("check bit status\n");
if(checkbit(x,p))
{
printf("on");
}
else
{
printf("off");
}
return 0;
}

