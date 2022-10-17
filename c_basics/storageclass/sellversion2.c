#include "read.h"

extern int noofitemsold,noofsales;

int sales()
{
int c,s,item;
printf("enter the items of your choice\n");
scanf("%d",&item);
s=available_stock();
{
if(item>0)
{
if(s >= item)
{
deletestock(item);
noofsales++;
noofitemsold+=item;
}
else
{
printf("(1)sell available stock\n (2)cancel the sales\n");
printf("enter the item of your choice\n");
scanf("%d",&c);
switch(c)
{
case 1:deletestock(s);
       noofsales++;
       noofitemsold+=s;
       break;
       
case 2:printf("it is not possible");
       break;
}
}
}
else
printf("enter only positive items");
}
}
