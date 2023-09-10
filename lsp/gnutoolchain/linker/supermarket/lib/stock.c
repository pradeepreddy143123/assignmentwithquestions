#include"../inc/header.h"
extern int stock;
void addstock(int item)
{
stock=stock+item;
}



int deletestock(int item)
{
stock=stock-item;
}


void available_stock()
{
printf("stock:%d\n",stock);
}


