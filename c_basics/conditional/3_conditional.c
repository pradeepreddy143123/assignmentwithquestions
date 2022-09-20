#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three number");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if (a>c)
printf("the biggest number is %d",a);
else
printf("the biggest number is %d",c);
}


else if(b>c)
{
if(b>a)
{
printf("the biggest number is %d",b);
}
else
printf("the biggest number is %d",a);
}


else if(c>a)
{
if(c>b)
printf("the biggest number is %d",c);
else
printf("the biggest number is %d",b);
}
return 0;
}

