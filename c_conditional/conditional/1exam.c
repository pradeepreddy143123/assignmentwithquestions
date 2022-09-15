#include<stdio.h>
int main()
{
int amount,d,notes;
printf("enter the amount to withdraw");
scanf("%d",&amount);
if(amount %50==0)
{
if(amount>=2000)
{
notes=amount/2000;
printf( "no of 2000 notes :%d\n",notes);
amount=amount%2000;
}
if(amount>=500)
{
notes=amount/500;
printf("no of 500 notes :%d\n",notes);
amount=amount%500;
}
if(amount>=200)
{
notes=amount/200;
printf("no of 200 notes :%d\n",notes);
amount=amount%200;
}
if(amount>=100)
{
notes=amount/100;
printf("no of 100 notes :%d\n",notes);
amount=amount%100;
}
if(amount>=50)
{
notes=amount/50;
printf("no of 50 notes :%d\n",notes);
amount=amount%50;
}
}
else
{
printf("enter the minimum amount 50");
}
return 0;
}
