#include "read.h"
static int stock=500;

int addstock(int item)
{
stock=stock+item;
return stock;
}

int deletestock(int item)
{
stock=stock-item;
return stock;
}

int available_stock()
{
return stock;
}
