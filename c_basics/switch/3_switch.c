#include<stdio.h>
int main()
{
int a,b,c,d,e,f,per;
printf("enter a number");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
per=(a+b+c+d+e+f)/6;
scanf("%d",&per);
switch(per/10)
{
case 10:printf("honours");
case 9:printf("honours");
case 8:printf("honours");
       break;
case 7:printf("first division");
case 6:printf("first  division");
       break;
case 5:printf("second division");
       break;
case 4:printf("third division");
       break;
case 3:printf("fail");
       break;
return 0;
}
}
