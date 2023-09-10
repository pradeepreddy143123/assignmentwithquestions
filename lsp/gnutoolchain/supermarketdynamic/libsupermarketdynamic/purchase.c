#include "read.h"
extern int noofpurchase,noofitempurchased;
int purchase()
{
int c,s,limit,item;
printf("enter the items of your choice\n");
scanf("%d",&item);
limit=1000;
s=available_stock();
if((s+item)<=limit)
{
addstock(item);
noofpurchase++;
noofitempurchased+=item;
}
else
{
printf("(1)purchase the possible items for remaining space\n (2)cancel the purchase\n");
scanf("%d",&c);
switch(c)
{
case 1:addstock(limit-s);
       noofpurchase++;
       noofitempurchased+=limit-s;
       break;
case 2:printf(" not possible");
       break;
}
}
}

