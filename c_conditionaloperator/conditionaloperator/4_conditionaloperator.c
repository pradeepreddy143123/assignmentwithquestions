#include<stdio.h>
int main()
{
int a,res;
printf("enter a number");
scanf("%d",&a);
res =a>0 ? printf( "positive") : a<0 ? printf("negative"): printf("zero");
 return 0;
}
