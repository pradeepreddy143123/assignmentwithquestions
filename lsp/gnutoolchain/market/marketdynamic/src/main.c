#include "../inc/read.h"
int noofsales;
int noofitemsold;
int noofpurchase;
int noofitempurchased;
int noofcustomersvisited;

int main()
{
int i=1,n,stock=0;
stock=available_stock();
while(i==1)
{
printf("\n(1) available_stock \n(2) sales \n(3) purchase \n(4) quit\n");
scanf("%d",&n);
switch(n)
{
case 1:stock=available_stock();
	printf("available stock %d \n",stock);
       break;
case 2:	sales();
	noofcustomersvisited++;
       	break;
case 3:purchase();
       break;
case 4:printf("closingstock=%d\n",stock);
       printf("noofsales=%d\n",noofsales);
       printf("noofitemsold=%d\n",noofitemsold);
       printf("noofpurchase=%d\n",noofpurchase);
       printf("noofitempurchased=%d\n",noofitempurchased);
       printf("noofcustomervisited=%d\n",noofcustomersvisited);
       i=0;
}
}
}

