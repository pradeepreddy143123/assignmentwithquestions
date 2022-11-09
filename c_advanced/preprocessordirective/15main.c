#include"15header.h"
#include"15header.h"
#include"15header.h"
#include"15header.h"

int stock=500;
int main()
{
int i=1,n;
while(i==1)
{
printf("\n(1) available_stock\n(2) sell\n(3) purchase\n(4) quit\n\n");
printf("enter the choices:");
scanf("%d",&n);
switch (n)
{
case 1:available_stock();
        break;
case 2:sell();
       break;
case 3:purchase();
        break;
case 4:i=0;
       break;
}
}
}

