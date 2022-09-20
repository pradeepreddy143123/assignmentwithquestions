#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the four numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
{
 if(a>c)
 {
  if(a>d)
    printf("the biggest number is %d",a);
 }
}


if(b>a)
{
 if(b>c)
 {
  if(b>d)
   printf("the biggest number is %d",b);
 }
}


if(c>a)
{
 if(c>b)
 {
  if(c>d)
  printf("the biggest number is %d",c);
 }
}


if(d>a)
{
 if(d>b)
 {
  if(d>c)
   printf("the biggest number is %d",d);
 }
}


return 0;
}
