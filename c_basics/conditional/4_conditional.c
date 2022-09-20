#include<stdio.h>
int main()
{
int a;
printf("enter a number");
scanf("%d",&a);
if(a>0)
printf("it is a positive number");
else if(a<0)
printf("it is a negative number");
else if(a==0)
printf("it is a zero number");
return 0;
}
