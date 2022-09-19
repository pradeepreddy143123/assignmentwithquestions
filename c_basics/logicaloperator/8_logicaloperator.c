#include<stdio.h>
int main()
{
int a,b,c,res;
printf("enter a number");
scanf("%d%d%d",&a,&b,&c);
res=a>b && a>c ? a : b>c ? b :c;
printf("%d",res);
return 0;
}
