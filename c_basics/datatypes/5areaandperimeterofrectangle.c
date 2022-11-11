/*calculate area and perimeter of rectangle
*/










#include<stdio.h>
int main()
{
int l,b;
float p;
float a;
printf("enter the length and breadth of rectangle");
scanf("%d%d",&l,&b);
p=2*(l+b);
a=l*b;
printf("%f",p);
printf("%f",a);
return 0;
}
