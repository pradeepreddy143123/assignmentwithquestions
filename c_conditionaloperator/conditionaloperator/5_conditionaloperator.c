#include<stdio.h>
int main()
{
int a,res;
printf("enter a number");
scanf("%d",&a);
res=a<0 ? printf("%d\n",-a) : printf("%d",a) ; 
return 0;
}
