#include<stdio.h>
int main()
{
int a;
printf("enter a number");
scanf("%d",&a);
a>0 ? printf( "positive") : a<0 ? printf("negative"): printf("zero");
 return 0;
}
