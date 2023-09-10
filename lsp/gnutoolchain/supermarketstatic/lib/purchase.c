#include "../header.h"
extern int stock;
void purchase(int item)
{
int limit;
printf("enter the item of your choice");
scanf("%d",&item);
limit=1000;
if(item + stock <= limit)
{
addstock(item);
}
else
{
printf("not posibile");
}
}

