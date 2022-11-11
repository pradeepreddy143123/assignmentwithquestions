/*if sale price and profit of n items is given find the cost price of 1 item.
eg., 
input:
number of items : 15
sale price : 500
profit : 50
output: 
cost price of each item: 30/- each
*/




#include<stdio.h>
int main()
{
int nitems,salesprice,profit,cp=0;
printf("enter the nitems,salesprice,profit\n");
scanf("%d%d%d",&nitems,&salesprice,&profit);
cp=(salesprice-profit)/nitems;
printf("%d",cp);
}
