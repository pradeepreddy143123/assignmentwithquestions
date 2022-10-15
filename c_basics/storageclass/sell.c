#include"header.h"
extern int stock;
void sell(int item)
{
printf("enter the item of your choice");
scanf("%d",&item);
if(item<stock)
{
deletestock(item);
}
else
{
printf("not possible");
}
}
